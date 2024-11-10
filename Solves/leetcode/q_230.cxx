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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> ix;
        TreeNode* arr=root;
        while(arr!=nullptr||!ix.empty())
        {
            while(arr!=nullptr)
            {
                ix.push(arr);
                arr=arr->left;
            }
            arr=ix.top();
            ix.pop();
            if(k-1==0)
                break;
            k--;
            arr=arr->right;
        }
        return arr->val;
    }
};
