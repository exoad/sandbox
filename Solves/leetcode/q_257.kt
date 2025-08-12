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
    fun binaryTreePaths(root: TreeNode?): List<String> {
        val res = mutableListOf<String>()
        if (root == null) 
        {
            return res
        }
        fun dfs(node: TreeNode?, path: String) {
            if (node == null) 
            {
                return
            }
            val newPath = if (path.isEmpty()) "${node.`val`}" else "$path->${node.`val`}"
            if (node.left == null && node.right == null) 
            {
                res.add(newPath)
            }
            else 
            {
                dfs(node.left, newPath)
                dfs(node.right, newPath)
            }
        }
        dfs(root, "")
        return res
    }
}
