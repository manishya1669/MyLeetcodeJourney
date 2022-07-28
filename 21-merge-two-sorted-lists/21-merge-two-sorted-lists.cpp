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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        
        
        while(t1 && t2)
        {
            if(t1->val <= t2->val)
            {
                temp->next = t1;
                
                t1 = t1->next;
                temp = temp->next;
                
            }
            else
            {
                temp->next = t2;
                
                t2 = t2->next;
                temp = temp->next;
            }
        }
        
        if(t1)
        {
            temp->next = t1;
                
            t1 = t1->next;
            temp = temp->next;
        }
        if(t2)
        {
            temp->next = t2;
                
            t2 = t2->next;
            temp = temp->next;
        }
        return head->next;
    }
};