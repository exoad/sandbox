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
    public int findBottomLeftValue(TreeNode root) {
        final var queue = new ArrayDeque<TreeNode>();
        Integer leftSide = null;
        queue.offer(root);
        while(!queue.isEmpty()) {
            leftSide = queue.peek().val; // ltr
            int depth = queue.size();
            for(int i = 0; i < depth; i++) {
                final var current = queue.poll();
                if(current.left != null) {
                    queue.offer(current.left);
                }
                if(current.right != null) {
                    queue.offer(current.right);
                }
            }
        }
        return leftSide;
    }
}
