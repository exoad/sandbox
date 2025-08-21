

class Solution {
    static record Edge(int node, int weight) {
    }
    
    public int[] dijkstra(int V, int[][] edges, int src) {
        final var adj = new HashMap<Integer, ArrayList<Edge>>();
        for(int i = 0; i < edges.length; i++) {
            adj.putIfAbsent(edges[i][0], new ArrayList<Edge>());
            adj.get(edges[i][0]).add(new Edge(edges[i][1], edges[i][2]));
            adj.putIfAbsent(edges[i][1], new ArrayList<Edge>());
            adj.get(edges[i][1]).add(new Edge(edges[i][0], edges[i][2]));
        }
        final var dist = new int[V];
        Arrays.fill(dist, Integer.MAX_VALUE);
        final var queue = new PriorityQueue<Edge>(Comparator.comparingInt(e -> e.weight));
        queue.offer(new Edge(src, 0));
        dist[src] = 0;
        while(!queue.isEmpty()) {
            final var current = queue.poll();
            if(dist[current.node] > current.weight) {
                continue;
            }
            for(var neighbor: adj.get(current.node)) {
                if(dist[current.node] + neighbor.weight < dist[neighbor.node]) { // shorter
                    dist[neighbor.node] = dist[current.node] + neighbor.weight;
                    queue.offer(new Edge(neighbor.node, dist[neighbor.node]));
                }
            }
            
        }
        return dist;
    }
}
