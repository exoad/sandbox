import 'dart:io';

String readLine() => stdin.readLineSync()!;

void main() {
  List<String> r=readLine().split(" ");
  print(int.parse(r[0])+int.parse(r[1]));
}