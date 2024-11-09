import "dart:collection";
class MyStack {
  Queue<int> s=Queue<int>();
  MyStack() {
  }
  
  void push(int x) {
    s.addLast(x);
  }
  
  int pop() {
    return s.removeLast();
  }
  
  int top() {
    return s.last;
  }
  
  bool empty() {
    return s.isEmpty;
  }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = MyStack();
 * obj.push(x);
 * int param2 = obj.pop();
 * int param3 = obj.top();
 * bool param4 = obj.empty();
 */