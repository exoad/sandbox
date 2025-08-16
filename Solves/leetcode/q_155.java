class MinStack {
    final Stack<Integer> all;
    final Stack<Integer> min;
    public MinStack() {
        all = new Stack<Integer>();
        min = new Stack<Integer>();
    }
    
    public void push(int val) {
        all.push(val);
        min.push(min.isEmpty() ? val : Math.min(min.peek(), val));
    }
    
    public void pop() {
        min.pop();
        all.pop();
    }
    
    public int top() {
        return all.peek();
    }
    
    public int getMin() {
        return min.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
