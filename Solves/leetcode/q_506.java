class Solution {
    public String[] findRelativeRanks(int[] score) {
        final var lookup = new HashMap<Integer, Integer>();
        for(var i = 0; i < score.length; i++) {
            lookup.put(score[i], i);
        }
        final var priorityQueue = new PriorityQueue<Integer>(Collections.reverseOrder());
        for(var s: score) {
            priorityQueue.offer(s);
        }
        final var res = new String[score.length];
        var currentRank = 1;
        while(!priorityQueue.isEmpty()) {
            final var current = priorityQueue.poll();
            res[lookup.get(current)] = switch(currentRank) {
                case 1 -> "Gold Medal";
                case 2 -> "Silver Medal";
                case 3 -> "Bronze Medal";
                default -> Integer.toString(currentRank);
            };
            currentRank++;
        }
        return res;
    }
}
