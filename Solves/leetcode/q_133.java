/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    public Node cloneGraph(Node node) {
        if(node == null) {
            return null;
        }
        final var stack = new ArrayDeque<Node>();
        final var cloned = new HashMap<Node, Node>();
        stack.push(node);
        cloned.put(node, new Node(node.val));
        while(!stack.isEmpty()) {
            final var current = stack.pop();
            final var clone = cloned.get(current);
            for(final var neighbor: current.neighbors) {
                if(!cloned.containsKey(neighbor)) {
                    cloned.put(neighbor, new Node(neighbor.val));
                    stack.push(neighbor);
                }
                clone.neighbors.add(cloned.get(neighbor));
            }
        }
        return cloned.get(node);
    }
}
