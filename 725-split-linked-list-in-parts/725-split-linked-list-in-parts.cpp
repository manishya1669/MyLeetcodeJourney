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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        vector<ListNode*> result;
        int size=0;
        for(ListNode *curr=head;curr!=NULL;curr=curr->next)
          size++;
        int unitSize=size/k;
        int rem=size%k;
        while(k--)
        {
           int currsize=unitSize+(rem-->0?1:0);
           result.push_back(head);
           ListNode *prev=NULL; 
           while(currsize--)
           {
               prev=head;
               head=head->next;
           }
           if(prev) prev->next=NULL;     
        } 
        return result;
    }
};