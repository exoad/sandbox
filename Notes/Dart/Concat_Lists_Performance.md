# Concatenation of Lists (Performance Analysis)

## Overview

In Dart there a few ways to add two `List`s together, but the different ways to do so may have a performance overhead.

1. Spread Operator `...`
2. `List<E>.allAll(Iterable<E> iterable)`
3. Concat Operator `+`

## Analysis

All of the following code was run with the following piece of code:

```dart
import "dart:math";
void main(List<String> args) {
  Random r=Random();
  List<int> a=List<int>.generate(100000,(idx)=>r.nextInt(239483));
  List<int> b=List<int>.generate(100001,(idx)=>r.nextInt(239823));
  DateTime now=DateTime.now();
  a.addAll(b);
  print(DateTime.now().difference(now).inMicroseconds);
  DateTime now=DateTime.now();
  a+b;
  print(DateTime.now().difference(now).inMicroseconds);
  DateTime now=DateTime.now();
  <int>[...a,...b];
  print(DateTime.now().difference(now).inMicroseconds);
  return;
}
```

Generating these results:

$$
\begin{array}{ccc}
Method & Time\ \mu{s} \\ \hline
Spread\ Operator\ \texttt{...} & 3634\ \mu{s} \\ \hline
Concat\ Operator\ \texttt{+} & 4094\ \mu{s} \\ \hline
\texttt{List.addAll} & 1359\ \mu{s}
\end{array}
$$

## Conclusion

Overall it is preferable to use the `List.addAll` method

## References

1. [Performance benchmark of different ways to append data to a list in dart, BytesBuilder vs AddAll vs Spread vs Concatenation](https://gist.github.com/PlugFox/9849994d1f229967ef5dc408cb6b7647)