# Comparing methods of checking `isDigit()`

## Table of Contents

- [Comparing methods of checking `isDigit()`](#comparing-methods-of-checking-raw-isdigit-endraw-)
   * [Overview](#overview)
   * [Analysis](#analysis)
      + [Environment](#environment)
         - [Software](#software)
         - [Hardware](#hardware)
   * [Conclusion](#conclusion)
      + [Best Option](#best-option)
      + [Second Best Option](#second-best-option)
   * [References](#references)

## Overview

This is a common concept that needs to be utilized in various languages and frameworks where given a string index/char, we need to determine if it is numerical (0-9).

Here are the methods I have researched and will be tested in this benchmark analysis:

1. Brute-forcing
2. Comparing the code units with `String.codeUnits`
3. RegEx
4. Using `int.parse`/`int.tryParse`
5. Using code units with bitwise

## Analysis

The benchmark was ran with this piece of code:

```dart
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
  print("Results for \"BruteForce: \" ${avgBench(bruteForce)}");
  print("Results for \"CodeUnit:\" ${avgBench(codeUnits)}");
  print("Results for \"RegEx:\" ${avgBench(regex)}");
  print("Results for \"IntParse:\" ${avgBench(intParse)}");
  print("Results for \"BitManipCodeUnits:\" ${avgBench(bitManipCodeUnits)}");
}
```

> You can find it [here](./src/is_digit/is_digit.dart)

### Environment

#### Software

- **Kernel:** `6.5.0-1025-azure`
- **Operating System:** `GNU/Linux Ubuntu-22.04.1`

#### Hardware

- **Processor:** `AMD EPYC 7763`
- **Total RAM** `8 GB`

Generating the following results:

$$
\begin{array}{lr}
Method & Time\ \mu{s} \\ \hline
Brute\ force & 358\ \mu{s} \\
\texttt{String.codeUnits}\ comparison & 248\ \mu{s} \\
RegEx\ ``\texttt{\textbackslash{d}}" & 885\ \mu{s} \\
\texttt{int.tryParse},\ \texttt{int.parse} & 383\ \mu{s} \\
\texttt{String.codeUnits} bitwise & 264\ \mu{s}
\end{array}
$$

## Conclusion

The most optimal way is to utilize direct comparison of `String.codeUnits` and avoid utilizing something like RegEx.

### Best Option

```dart
const int _zero = 48; // deduced using "0".codeUnits[0]
const int _nine = 57; // deduced using "9".codeUnits[0]
bool codeUnits(String str, int idx) {
  int cuIdx = str.codeUnits[idx];
  return cuIdx >= _zero && cuIdx <= _nine;
}
```

### Second Best Option

```dart
bool bitManipCodeUnits(String str, int idx) {
  return (str.codeUnitAt(idx) ^ 0x30) <= 9;
}
```

## References

1. [Dart: what is the fastest way to check if a particular symbol in a string is a digit?](https://stackoverflow.com/questions/25872456/dart-what-is-the-fastest-way-to-check-if-a-particular-symbol-in-a-string-is-a-d)