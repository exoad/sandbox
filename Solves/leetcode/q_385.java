/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * public interface NestedInteger {
 *     // Constructor initializes an empty nested list.
 *     public NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     public NestedInteger(int value);
 *
 *     // @return true if this NestedInteger holds a single integer, rather than a nested list.
 *     public boolean isInteger();
 *
 *     // @return the single integer that this NestedInteger holds, if it holds a single integer
 *     // Return null if this NestedInteger holds a nested list
 *     public Integer getInteger();
 *
 *     // Set this NestedInteger to hold a single integer.
 *     public void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     public void add(NestedInteger ni);
 *
 *     // @return the nested list that this NestedInteger holds, if it holds a nested list
 *     // Return empty list if this NestedInteger holds a single integer
 *     public List<NestedInteger> getList();
 * }
 */
class Solution {
    public NestedInteger deserialize(String s) {
        if(s == null || s.isEmpty()) {
            return null;
        }
        if(!s.startsWith("[")) {
            return new NestedInteger(Integer.parseInt(s));
        }
        final var stack = new ArrayDeque<NestedInteger>();
        NestedInteger current = null;
        int num = 0;
        boolean negative = false;
        boolean parsed = false;
        for(int i = 0; i < s.length(); i++) {
            final var c = s.charAt(i);
            if(c == '[') {
                if(current != null) {
                    stack.push(current);
                }
                current = new NestedInteger();
            } else if(c == ']') {
                if(parsed) {
                    current.add(new NestedInteger(negative ? -num : num));
                    parsed = false;
                    num = 0;
                    negative = false;
                }
                if(!stack.isEmpty()) {
                    final var parent = stack.pop();
                    parent.add(current);
                    current = parent;
                }
            } else if(c == ',' && parsed) {
                current.add(new NestedInteger(negative ? -num : num));
                parsed = false;
                negative = false;
                num = 0;
            } else if(c == '-') {
                negative = true;
            } else if(Character.isDigit(c)) {
                num = num * 10 + (c - '0');
                parsed = true;
            }
        }
        return current;
    }
}
