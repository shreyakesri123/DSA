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
    bool isPalindrome(ListNode* head) {
         
       if(head->next==NULL) return true;
       ListNode*slow=head;
       ListNode*fast=head->next;
       while(fast && fast->next)
       {
          slow= slow->next;
          fast= fast->next->next;
       }
     ListNode*curr= slow->next;
     slow->next=NULL;

     ListNode*prev=NULL;
     while(curr)
    {
    ListNode*next= curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    }
    
    ListNode*x= head;
    ListNode*y=prev;
    
    while(x && y)
    {
        if(x->val!=y->val) return false;
        x=x->next;
        y=y->next;
    }
    return true;

    }
};