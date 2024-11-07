/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int h(TreeNode* r)
    {
        if(r==nullptr)
            return 0;
        return max(h(r->right),h(r->left))+1;
    }
    bool _p(TreeNode* r)
    {
        if(r==nullptr)
            return true;
        int lx=h(r->left);
        int rx=h(r->right);
        return abs(lx-rx)<=1&&_p(r->right)&&_p(r->left);
    }
    bool isBalanced(TreeNode* root) {
        return root==nullptr?true:_p(root);
    }
};