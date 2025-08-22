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
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        if(depth == 1) {
            return new TreeNode(val, root, null);
        }
        final var queue = new ArrayDeque<TreeNode>();
        queue.offer(root);
        var level = 1;
        while(!queue.isEmpty()) {
            var size = queue.size();
            if(level == depth - 1) {
                while(size-- > 0) {
                    var node = queue.poll();
                    final var left = node.left;
                    final var right = node.right;
                    node.left = new TreeNode(val, left, null);
                    node.right = new TreeNode(val, null, right);
                }
                break;
            } else {
                while(size-- > 0) {
                    var node = queue.poll();
                    if(node.left != null) {
                        queue.offer(node.left);
                    } 
                    if(node.right != null) { 
                        queue.offer(node.right); 
                    }
                }
                level++;
            }
        }
        return root;
    }
}
