/* A Binary Tree node
class Node
{
    int data;
    Node left, right;
}*/

class Solution {
    int countLeaves(Node node) {
        if(node == null) {
            return 0;
        }
        int r = countLeaves(node.right);
        int l = countLeaves(node.left);
        if(node.left == null && node.right == null) {
            return 1;
        }
        return r + l;
    }
}
