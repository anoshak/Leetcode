/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        stack<TreeNode*> mystack;
        while(1)
        {
        while(root)
        {
            mystack.push(root);
            root=root->left;
        }
        if(mystack.empty())
            break;
        root = mystack.top();
        mystack.pop();
        result.push_back(root->val);
        root=root->right;
        }
        return result;
    }
};