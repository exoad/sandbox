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
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)
            return true;
        stack<TreeNode*> s;
        TreeNode* last=nullptr;
        TreeNode* arr=root;
        while(arr!=nullptr||!s.empty())
        {
            while(arr!=nullptr)
            {
                s.push(arr);
                arr=arr->left;
            }
            arr=s.top();
            s.pop();
            if(last!=nullptr&&last->val>=arr->val)
                return false;
            last=arr;
            arr=arr->right;
        }
        return true;
    }
};
