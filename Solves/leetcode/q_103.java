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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        final List<List<Integer>> res = new ArrayList<>();
        if(root == null) {
            return res;
        }
        final var level = new ArrayDeque<TreeNode>();
        level.offerFirst(root);
        boolean ltr = true;
        while(!level.isEmpty()) {
            var count = level.size();
            final var nodes = new ArrayList<Integer>(count);
            if(ltr) {
                while(count-- > 0) {
                    final var current = level.pollFirst();
                    nodes.add(current.val);
                    if(current.left != null) {
                        level.offerLast(current.left);
                    } 
                    if(current.right != null) {
                        level.offerLast(current.right);
                    }
                }
            } else {
                while(count-- > 0) {
                    final var current = level.pollLast();
                    nodes.add(current.val);
                    if(current.right != null) {
                        level.offerFirst(current.right);
                    }
                    if(current.left != null) {
                        level.offerFirst(current.left);
                    }
                }
            }
            ltr = !ltr;
            res.add(nodes);
        }
        return res;
    }
}
