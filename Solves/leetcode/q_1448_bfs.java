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
    static record Entry(TreeNode node, int i) {
    }

    public int goodNodes(TreeNode root) {
        var res = 0;
        final var queue = new ArrayDeque<Entry>();
        queue.offer(new Entry(root, root.val));
        while(!queue.isEmpty()) {
            final var current = queue.poll();
            final var currentMax = current.i();
            if(current.node().val >= currentMax) {
                res++;
            }
            final var max = Math.max(currentMax, current.node().val);
            if(current.node().left != null) {
                queue.offer(new Entry(current.node().left, max));
            }
            if(current.node().right != null) {
                queue.offer(new Entry(current.node().right, max));
            }
        }
        return res;
    }
}
