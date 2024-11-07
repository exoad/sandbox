# Queue

A queue is FIFO (*First In First Out*) data structure that supports the following operations in $O(1)$ time complexity:

- `push` (enqueuing) - inserts an element at the end of the queue
- `pop` (dequeuing) - deletes the element at the front of the queue
- `front` (peek) - peek at the element at the front of the queue

A good way to think of this data structure is like a physical queue in the real world like waiting in line.

## Implementation

### Java

Most of the implementations found within the Java Collections Framework involve inheriting from the [`Queue`](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/Queue.html) interface.

The most **common** form is derived using [`LinkedList`](https://docs.oracle.com/en/java/javase/17/docs/api/java.base/java/util/LinkedList.html):

```java
import java.util.*;
...
Queue<E> queue=new LinkedList<>();
```

### C++

The C++ STL has [`std::queue`](https://cplusplus.com/reference/queue/queue/)

```cpp
#include <queue>
std::queue<int> q;
```

## Other forms

There are other Queue types under the Queue umbrella:

1. Circular Queue
2. Double Ended Queue (Deque) *Pronounced like "deck"*
3. Priority Queue
