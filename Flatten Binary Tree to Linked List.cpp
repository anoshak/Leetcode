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
    void flatten(TreeNode *root) {
        if(!root)
            return;
        TreeNode *rt = root->right;
        TreeNode *lt = root->left;
        flatten(rt);
        flatten(lt);
        root->left = NULL;
        root->right = lt;
        while(root->right)
            root=root->right;
        root->right = rt;
        
    }
};