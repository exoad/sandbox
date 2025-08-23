class Solution {
    static final int[][] directions = { { 0,1 }, { 1,0 }, { 0,-1 }, { -1,0 } };
    public int minimumEffortPath(int[][] heights) {
        final var efforts = new int[heights.length][heights[0].length];
        for(var row: efforts) {
            Arrays.fill(row, Integer.MAX_VALUE);
        }
        efforts[0][0] = 0;
        final var priorityQueue = new PriorityQueue<int[]>(Comparator.comparingInt(a -> a[2]));
        priorityQueue.offer(new int[] { 0, 0, 0 });
        while(!priorityQueue.isEmpty()) {
            final var current = priorityQueue.poll();
            if(current[0] == heights.length - 1 && current[1] == heights[0].length - 1) {
                return current[2];
            }
            for(final var dirs: directions) {
                final var nextRow = current[0] + dirs[0];
                final var nextColumn = current[1] + dirs[1];
                if(nextRow >= 0 && nextRow < heights.length && nextColumn >= 0 && nextColumn < heights[0].length) {
                    final var max = Math.max(current[2], Math.abs(heights[nextRow][nextColumn] - heights[current[0]][current[1]]));
                    if(efforts[nextRow][nextColumn] > max) {
                        efforts[nextRow][nextColumn] = max;
                        priorityQueue.offer(new int[] { nextRow, nextColumn, max });
                    }
                }
            }
        }
        return -1;
    }
}
