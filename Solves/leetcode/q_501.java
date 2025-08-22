/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    public int[] findMode(TreeNode root) {
        final var freqTable = new HashMap<Integer, Integer>();
        final var stack = new ArrayDeque<TreeNode>();
        final var visited = new HashSet<TreeNode>();
        stack.push(root);
        while(!stack.isEmpty()) {
            final var current = stack.pop();
            if(visited.contains(current)) {
                continue;
            }
            freqTable.put(current.val, freqTable.containsKey(current.val) ? freqTable.get(current.val) + 1 : 1);
            visited.add(current);
            if(current.left != null && !visited.contains(current.left)) {
                stack.push(current.left);
            }
            if(current.right != null && !visited.contains(current.right)) {
                stack.push(current.right);
            }
        }
        var max = Integer.MIN_VALUE;
        for(var entry: freqTable.entrySet()) {
            if(entry.getValue() > max) {
                max = entry.getValue();
            } 
        }
        final var res = new ArrayList<Integer>();
        for(var entry: freqTable.entrySet()) {
            if(entry.getValue() == max) {
                res.add(entry.getKey());
            } 
        }
        return res.stream().mapToInt(Integer::intValue).toArray();
    }
}
