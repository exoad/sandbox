import 'dart:math';

const int testCases = 50;
late List<String> tests;

Duration bench(dynamic Function(String str, int idx) r,
    {required String str, required int idx}) {
  DateTime now = DateTime.now();
  r(str, idx);
  return DateTime.now().difference(now);
}

Duration avgBench(dynamic Function(String str, int idx) r, [int runs = 100]) {
  assert(runs > 0);
  Duration sum = Duration();
  for (int i = 0; i < runs; i++)
    for (int j = 0; j < tests.length; j++)
      for (int k = 0; k < tests[j].length; k++)
        sum += bench(r, str: tests[j], idx: k);
  return sum ~/ runs;
}

bool bruteForce(String str, int idx) {
  return str[idx] == "0" ||
      str[idx] == "1" ||
      str[idx] == "2" ||
      str[idx] == "3" ||
      str[idx] == "4" ||
      str[idx] == "5" ||
      str[idx] == "6" ||
      str[idx] == "7" ||
      str[idx] == "8" ||
      str[idx] == "9";
}

bool bitManipCodeUnits(String str, int idx) {
  return (str.codeUnitAt(idx) ^ 0x30) <= 9;
}

const int _zero = 48; // deduced using "0".codeUnits[0]
const int _nine = 57; // deduced using "9".codeUnits[0]
bool codeUnits(String str, int idx) {
  int cuIdx = str.codeUnits[idx];
  return cuIdx >= _zero && cuIdx <= _nine;
}

final RegExp reg = new RegExp(r"\d");
bool regex(String str, int idx) {
  return str[idx].contains(reg);
}

bool intParse(String str, int idx) {
  return int.tryParse(str) != null;
}

void main(List<String> args) {
  // Setup tests
  tests = <String>[];
  const int constLen = 30;
  const String alphabet =
      "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
  Random rng = Random();
  StringBuffer buffer = StringBuffer();
  for (int i = testCases; i > 0; i--) {
    buffer.clear();
    for (int i = 0; i < constLen + testCases; i++)
      buffer.write(rng.nextBool()
          ? rng.nextInt(10)
          : alphabet[rng.nextInt(alphabet.length)]);
    tests.add(buffer.toString());
  }
  print("Results for \"BruteForce: \" ${avgBench(bruteForce).inMicroseconds}");
  print("Results for \"CodeUnit:\" ${avgBench(codeUnits).inMicroseconds}");
  print("Results for \"RegEx:\" ${avgBench(regex).inMicroseconds}");
  print("Results for \"IntParse:\" ${avgBench(intParse).inMicroseconds}");
  print("Results for \"BitManipCodeUnits:\" ${avgBench(bitManipCodeUnits).inMicroseconds}");
}
