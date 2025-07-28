/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {

    fun getAllElements(root1: TreeNode?, root2: TreeNode?): List<Int> {
        val res = mutableListOf<Int>()
        fun dfs(root: TreeNode?)
        {
            if(root != null)
            {
                res.add(root.`val`)
                dfs(root.left)
                dfs(root.right)
            }
        }
        dfs(root1)
        dfs(root2)
        return res.sorted()
    }
}