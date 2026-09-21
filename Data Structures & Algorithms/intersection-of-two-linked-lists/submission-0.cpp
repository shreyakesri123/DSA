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
    ListNode* getIntersectionNode(ListNode* a, ListNode* b) {
         
         ListNode*x=a;
         ListNode*y=b;

        while(x && y)
        {
           if(x==y) {return x;break;}
           x=x->next;
           y=y->next;

           if(!x && !y) return NULL;

           if(x==NULL) x=b;
           if(y==NULL) y=a;
        }

        return NULL;
    }
};