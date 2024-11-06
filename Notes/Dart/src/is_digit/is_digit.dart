import 'dart:math';

late List<String> tests;

Duration bench(void Function(String str, int idx) r) {
  DateTime now = DateTime.now();
  r();
  return DateTime.now().difference(now);
}

Duration avgBench(void Function(String str, int idx) r, [int runs = 100]) {
  assert(runs > 0);
  Duration sum = Duration();
  for (int i = 0; i < runs; i++) sum += bench(r);
  return sum ~/ runs;
}

void main(List<String> args) {
  // Setup tests
  int testCases = 20;
  tests = <String>[];
  const int constLen = 10;
  const String alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYy";
  Random rng = Random();
  StringBuffer buffer = StringBuffer();
  while (testCases-- > 0) {
    buffer.clear();
    for (int i = 0; i < constLen + testCases; i++)
      buffer.write(rng.nextBool()
          ? rng.nextInt(10)
          : alphabet[rng.nextInt(alphabet.length)]);
    tests.add(buffer.toString());
  }
  void Function() bruteForce = () {};
  void Function() codeUnits = () {};
  void Function() regex = () {};
  void Function() intParse = () {};
  void Function() bitManipCodeUnits = () {};
  print("Results for \"BruteForce: \" ${avgBench(bruteForce)}");
  print("Results for \"CodeUnit:\" ${avgBench(codeUnits)}");
  print("Results for \"RegEx:\" ${avgBench(regex)}");
  print("Results for \"IntParse:\" ${avgBench(intParse)}");
  print("Results for \"BitManipCodeUnits:\" ${avgBench(bitManipCodeUnits)}");
}
