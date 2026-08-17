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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode* d= new ListNode(0);
         d->next=head;
         ListNode*node= d;

         for(int i=1;i<left;i++)
         {
            node=node->next;
         }
         ListNode*prev=NULL;
         ListNode*curr=node->next;
         ListNode*next=NULL;

         int count = right-left+1;
         while(count)
         {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count--;
         }

         node->next->next=curr;
         node->next=prev;

         return d->next;
    }
};