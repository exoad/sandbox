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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> ix;
        ix.push(root);
        bool hx=0;
        while(!ix.empty())
        {
            TreeNode* tx=ix.front();
            ix.pop();
            if(tx==nullptr)
                hx=1;
            else
            {
                if(hx)
                    return false;
                ix.push(tx->left);
                ix.push(tx->right);
            }
        }
        return true;
    }
};