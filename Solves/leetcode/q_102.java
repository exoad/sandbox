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
    public List<List<Integer>> levelOrder(TreeNode root) {
        final List<List<Integer>> res = new ArrayList<>();
        if(root == null) {
            return res;
        }
        final var queue = new ArrayDeque<TreeNode>();
        queue.offerFirst(root);
        while(!queue.isEmpty()) {
            final var list = new ArrayList<Integer>();
            final var depth = queue.size();
            for(int i = 0; i < depth; i++) {
                final var current = queue.pollLast();
                list.add(current.val);
                if(current.left != null) {
                    queue.offerFirst(current.left);
                }
                if(current.right != null) {
                    queue.offerFirst(current.right);
                }
            }
            res.add(list);
        }
        return res;
    }
}
