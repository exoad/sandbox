class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {
        // Code here
        final var stack = new ArrayDeque<Integer>();
        final var visited = new boolean[adj.size()];
        final var res = new ArrayList<Integer>();
        stack.push(0);
        while(!stack.isEmpty()) {
            final var current = stack.pop();
            if(visited[current]) {
                continue;
            }
            res.add(current);
            visited[current] = true;
            final var neighbors = adj.get(current);
            for(int i = neighbors.size() - 1; i >= 0; i--) {
                if(!visited[neighbors.get(i)]) {
                    stack.push(neighbors.get(i));
                }
            }
        }
        return res;
    }
}
