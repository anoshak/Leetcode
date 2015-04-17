/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode *s = head;
        stack<int> mystack;
        for(int i=1;i<m;i++)
            s=s->next;
        ListNode *t = s;
        for(int i=m;i<=n;i++)
        {
            mystack.push(t->val);
            t=t->next;
        }
        for(int i=m;i<=n;i++)
        {
            s->val = mystack.top();
            mystack.pop();
            s=s->next;
        }
        return head;
    }
};