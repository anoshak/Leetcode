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
    bool isValidBST(TreeNode*root, long min, long max)
    {
        if(root)
        {
            if(root->val >min && root->val < max)
            {
                if(isValidBST(root->left,min,root->val) && isValidBST(root->right,root->val,max))
                    return 1;
                else return 0;
            }
            else return 0;
        }
        else return 1;
    }
    bool isValidBST(TreeNode *root) {
        return isValidBST(root, (long)INT_MIN -1,(long)INT_MAX+1);
    }
};