class Solution {
    public boolean isCyclic(int V, int[][] edges) {
        final var adj = new ArrayList<ArrayList<Integer>>();
        for(int i = 0; i < V; i++) {
            adj.add(new ArrayList<>());
        }
        final var inDegree = new int[V];
        for(var edge: edges) {
            adj.get(edge[0]).add(edge[1]);
            inDegree[edge[1]]++;
        }
        final var queue = new ArrayDeque<Integer>();
        for(int i = 0; i < V; i++) {
            if(inDegree[i] == 0) {
                queue.offer(i);
            }
        }
        int visitedCount = 0;
        while(!queue.isEmpty()) {
            final var node = queue.poll();
            visitedCount++;
            for(var neighbor: adj.get(node)) {
                inDegree[neighbor]--;
                if(inDegree[neighbor] == 0) {
                    queue.offer(neighbor);
                }
            }
        }
        return visitedCount != V; 
    }
}
