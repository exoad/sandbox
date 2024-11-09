# Linear Search 

## Overview

The simplest and most naive way to search for an element $k$ in a selection of $n$ *unsorted* elements. However, with its naiveness and simplicity, it means it is also not the best solution. For example, it is not good when the dataset to search in is very big.

### Time complexity

**Worst Case** $O(N)$

**Best Case** $O(1)$

## Implementation

In most cases, linear search is just implemented with a loop.

### C++ 

```cpp
bool contains(vector<int>& a,int b)
{
    for(int&x:a)
        if(x==b)
            return true;
    return false;
}
```

### Dart

```dart
bool contains(List<int> a,int b)
{
    for(int t in a) {
        if(t==b) {
            return true;
        }
    }
    return false;
}
```