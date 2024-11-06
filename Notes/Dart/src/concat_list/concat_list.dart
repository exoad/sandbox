import "dart:math";

void main(List<String> args) {
  Random r = Random();
  List<int> a = List<int>.generate(100000, (idx) => r.nextInt(239483));
  List<int> b = List<int>.generate(100001, (idx) => r.nextInt(239823));
  DateTime now = DateTime.now();
  a.addAll(b);
  print(DateTime.now().difference(now).inMicroseconds);
  DateTime now1 = DateTime.now();
  a + b;
  print(DateTime.now().difference(now1).inMicroseconds);
  DateTime now2 = DateTime.now();
  <int>[...a, ...b];
  print(DateTime.now().difference(now2).inMicroseconds);
  return;
}
