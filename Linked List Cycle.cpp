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
    bool hasCycle(ListNode *head) {
        ListNode *sr=head,*fr=head;
        while(fr && fr->next)
        {
            sr=sr->next;
            fr=fr->next->next;
            if(fr==sr)
                break;
        }
        if(fr == NULL || fr->next == NULL)
            return 0;
        else return 1;
        }
};