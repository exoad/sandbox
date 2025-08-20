class Solution {
    // Function to return Breadth First Search Traversal of given graph.
    public ArrayList<Integer> bfs(ArrayList<ArrayList<Integer>> adj) {
        // code here
        final var res = new ArrayList<Integer>();
        final var queue = new ArrayDeque<Integer>();
        final var visited = new boolean[adj.size()];
        queue.offer(0);
        visited[0] = true;
        while(!queue.isEmpty()) {
            final var current = queue.poll();
            res.add(current);
            for(var neighbor: adj.get(current)) {
                if(!visited[neighbor]) {
                    queue.offer(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        return res;
    }
}
