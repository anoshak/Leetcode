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
    ListNode *rotateRight(ListNode *head, int k) {
        //first find length of list
        int len=0;
        ListNode *p = head;
        while(p)
        {
            len++;
            p=p->next;
        }
        if(len==0)
            return head;
        if(k>len)
            k=k%len;
        if(k<=0)
            return head;
        if(k==len)
            return head;

        //move to len-k-1 node;
        p=head;
        for(int i=0;i<len-k-1;i++)
            p=p->next;
        ListNode *newhead = p->next;
        p->next=NULL;
        p=newhead;
        while(p->next)
            p=p->next;
        p->next = head;
        return newhead;
    }
};