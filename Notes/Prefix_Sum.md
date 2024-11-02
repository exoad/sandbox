# Prefix Sum

## Definition

Also known as a *cumulative sum* or *inclusive scan* is the sum of prefixes of an array $x$.

Each element in a prefix sum array $y$ is represented as the sum of the original arrays $x$ elements $x_i$ up to that index $i$.

$$
x_0,\\
x_1,\\
x_2, \\
\dots \\
x_i
$$
$$
y_0=x_0,\\
y_1=x_0+x_1,\\
y_2=x_0+x_1+x_2 \\
\dots \\
y_i=y_{i-1}+x_i
$$

### The general formula

$$
y_i=y_{i-1}+x_i=\sum_{j=0}^{i} x_j
$$

- Where $x$ represents the original array
- Where $y$ represents the prefix sum array

### Example

Sample code

## Sample

### Dart

```dart
List<int> prefixSum(List<int> x){
    List<int> y=<int>[x[0]];
    for(int i=1;i<x.length;i++)
        y.add(y[i-1]+x[i]);
    return y;
}
```

### Java

```java
int[] prefixSum(int[] x)
{
    int[] y=new int[x.length];
    y[0]=x[0];
    for(int i=1;i<x.length;i++)
        y[i]=y[i-1]+x[i];
    return y;
}
```

## Additional References

1. [**USACO Guide** "Introduction to Prefix Sum"](https://usaco.guide/silver/prefix-sums?lang=cpp)
2. [C++ `std::partial_sum`](https://cplusplus.com/reference/numeric/partial_sum/)
