/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode *sortedListToBST(ListNode *head) {
        ListNode *sr=head,*fr=head,*prev=NULL;
        while(fr && fr->next)
        {
            prev=sr;
            sr=sr->next;
            fr=fr->next->next;
        }
        if(sr)
        {
            TreeNode *p = (TreeNode*)malloc(sizeof(TreeNode));
            p->val = sr->val;
            if(prev)
                prev->next=NULL;
            else head = NULL;
            p->left = sortedListToBST(head);
            p->right = sortedListToBST(sr->next);
            return p;
        }
        else return NULL;
        
        
    }
};