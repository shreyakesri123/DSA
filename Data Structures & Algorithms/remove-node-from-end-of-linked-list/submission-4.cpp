/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
int l(ListNode*head)
{
    if(head==NULL) return 0;
    ListNode*curr= head;
    int count =0;
    while(curr)
    {
        count++;curr=curr->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int m) {
        
        if(m==1 && head->next==NULL) return NULL;

        int n= l(head);
        int r= n-m+1;
        
        if(r==1)
        {
            head= head->next;
            return head;
        }

        int count =1;
        ListNode*curr= head;

        while(count<r-1 && curr)
        {
            count++;
            curr=curr->next;
        }
        if(curr->next->next)
        {
            curr->next= curr->next->next;
            // curr=curr->next;
        }
        else curr->next=NULL;
        
        return head;
    }
};
