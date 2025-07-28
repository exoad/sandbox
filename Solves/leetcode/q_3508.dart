import "dart:collection";
import "dart:typed_data";

class Router {
  final int _memoryLimit;
  final ListQueue<int> _packetIds;
  final Set<int> _packetHashes;
  final Map<int, List<int>> _index;
  final Int32List _packetData;
  final ListQueue<int> _freeIds;
  int _nextId = 0;

  @pragma("vm:prefer-inline")
  static int _cantor(int a, int b) {
    return (a + b + 1) * (a + b) ~/ 2 + b;
  }

  @pragma("vm:prefer-inline")
  static int hash(int a, int b, int c) {
    return _cantor(a, _cantor(b, c));
  }

  Router(final int memoryLimit)
      : _memoryLimit = memoryLimit,
        _packetIds = ListQueue<int>(),
        _packetHashes = <int>{},
        _index = <int, List<int>>{},
        _packetData = Int32List(memoryLimit * 3),
        _freeIds = ListQueue<int>();

  bool addPacket(final int source, final int destination, final int timestamp) {
    final int hash = Router.hash(source, destination, timestamp);
    if (_packetHashes.contains(hash)) {
      return false;
    }
    if (_packetIds.length == _memoryLimit) {
      final int oldId = _packetIds.removeFirst();
      final int oldDestination = _packetData[oldId * 3 + 1];
      _packetHashes
          .remove(Router.hash(_packetData[oldId * 3], oldDestination, _packetData[oldId * 3 + 2]));
      final List<int>? packets2 = _index[oldDestination];
      if (packets2 != null) {
        packets2.remove(oldId);
        if (packets2.isEmpty) {
          _index.remove(oldDestination);
        }
      }
      _freeIds.add(oldId);
    }
    final int newId = _freeIds.isEmpty ? _nextId++ : _freeIds.removeFirst();
    _packetData[newId * 3] = source;
    _packetData[newId * 3 + 1] = destination;
    _packetData[newId * 3 + 2] = timestamp;
    _packetIds.addLast(newId);
    _packetHashes.add(hash);
    final List<int> packets = _index.putIfAbsent(destination, () => <int>[]);
    final int timestamp2 = _packetData[newId * 3 + 2];
    int left = 0;
    int right = packets.length;
    while (left < right) {
      final int mid = left + (right - left) ~/ 2;
      final int midTimestamp = _packetData[packets[mid] * 3 + 2];
      if (midTimestamp <= timestamp2) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    packets.insert(left, newId);
    return true;
  }

  static const List<int> _empty = <int>[];

  List<int> forwardPacket() {
    if (_packetIds.isEmpty) {
      return _empty;
    }
    final int id = _packetIds.removeFirst();
    final int source = _packetData[id * 3];
    final int destination = _packetData[id * 3 + 1];
    final int timestamp = _packetData[id * 3 + 2];
    _packetHashes.remove(Router.hash(source, destination, timestamp));
    final List<int>? packets = _index[destination];
    if (packets != null) {
      packets.remove(id);
      if (packets.isEmpty) {
        _index.remove(destination);
      }
    }
    _freeIds.add(id);
    return <int>[source, destination, timestamp];
  }

  int getCount(final int destination, final int startTime, final int endTime) {
    final List<int>? packetIds = _index[destination];
    if (packetIds == null || packetIds.isEmpty) {
      return 0;
    }
    int left = 0;
    int right = packetIds.length;
    while (left < right) {
      final int mid = left + (right - left) ~/ 2;
      if (_packetData[packetIds[mid] * 3 + 2] < startTime) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left == packetIds.length ? 0 : _bsHigher(packetIds, endTime) - left;
  }

  int _bsHigher(final List<int> packetIds, final int target) {
    int left = 0;
    int right = packetIds.length;
    while (left < right) {
      final int mid = left + (right - left) ~/ 2;
      final int timestamp = _packetData[packetIds[mid] * 3 + 2];
      if (timestamp <= target) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left;
  }
}
