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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *resultSt=NULL,*resultEnd=NULL;
        int carry = 0;
        int sum = 0;
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                sum += l1->val;
                l1=l1->next;
            }
            if(l2)
            {
               sum += l2->val;
               l2 = l2->next;
            }
                
            sum += carry;
            carry = sum/10;
            ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = sum%10;
            temp->next = NULL;
            if(!resultSt)
                resultSt=temp;
            else 
                resultEnd->next = temp;
            resultEnd = temp;
            sum=0;
            
        }
        return resultSt;
    }
};