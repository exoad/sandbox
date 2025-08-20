class Solution {
    public boolean isCycle(int V, int[][] edges) {
        final var adj = new ArrayList<ArrayList<Integer>>();
        for(int i = 0; i < V; i++) {
            adj.add(new ArrayList<>());
        }
        for(var edge: edges) {
            adj.get(edge[0]).add(edge[1]);
            adj.get(edge[1]).add(edge[0]);
        }
        final var visited = new boolean[V];
        for(int i = 0; i < V; i++) {
            if(visited[i]) {
                continue;
            }
            final var queue = new ArrayDeque<int[]>();
            queue.offer(new int[]{ i, -1 });
            visited[i] = true;
            while(!queue.isEmpty()) {
                final var edge = queue.poll();
                for(var neighbor: adj.get(edge[0])) {
                    if(!visited[neighbor]) {
                        visited[neighbor] = true;
                        queue.offer(new int[]{ neighbor, edge[0] });
                    } else if(neighbor != edge[1]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
