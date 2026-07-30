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
    ListNode* mergeKLists(vector<ListNode*>& list) {
        ListNode*node= new ListNode(-1);
        ListNode*a= node;
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;

        for(int i=0;i<list.size();i++)
        {
            if(list[i]!=NULL)
           pq.push({list[i]->val,list[i]});
        }
        
        while(!pq.empty())
        {
            int b= pq.top().first;
            ListNode* c= pq.top().second;
            pq.pop();
            a->next = new ListNode(b);
            a=a->next;
            if(c->next)
            { 
              c=c->next;
              pq.push({c->val,c});
            }
        }
        return node->next;
    }
};
