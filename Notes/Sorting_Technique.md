# Sorting

Most programming language frameworks come with some sort of way to sort generic linear data structures.

> *For most competitive programming purposes, implementation of sorting algorithms are not usually required.*

## Table of Contents

- [Sorting](#sorting)
   * [C++](#c)
      + [Arrays](#arrays)
      + [`std::vector`, etc](#-raw-stdvector-endraw-etc)
   * [Java](#java)
      + [Arrays](#arrays-1)
      + [Collections](#collections)
   * [Dart](#dart)

## C++

C++'s STL comes with the `std::sort` located in the [`algorithm`](https://cplusplus.com/reference/algorithm/) header.

We then supply this function with a containers `std::begin` and `std::end` iterator

### Arrays

```cpp
int arr={...};
std::sort(std::begin(arr),std::end(arr));
```

### `std::vector`, etc

```cpp
std::vector<int> arr;
std::sort(arr.begin(),arr.end());
```

## Java

There are two methods with `Arrays` and `Collections`.


### [Arrays](https://docs.oracle.com/javase/8/docs/api/java/util/Arrays.html#sort-int:A-)

```java
Arrays.java(new int[]{...});
```

### [Collections](https://docs.oracle.com/javase/8/docs/api/java/util/Collections.html#sort-java.util.List-)

This is used for anything relating to the Collections Framework and not primitive arrays/

```java
ArrayList<Integer> v=new ArrayList<>();
...
Collections.sort(v);
```

## Dart

The linear data structure `List<E>` in Dart has the [`sort()`](https://api.flutter.dev/flutter/dart-core/List/sort.html) method:

```dart
List<int> r=<int>[...];
r.sort();
```
