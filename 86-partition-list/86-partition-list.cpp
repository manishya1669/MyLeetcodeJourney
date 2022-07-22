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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *small  = new ListNode(0);
        ListNode *great  = new ListNode(0);
        
        ListNode *iterateSmall = small;
        ListNode *iterateGreat = great;
        
        while(head != NULL){
            
            if(head ->val <x){
                iterateSmall->next = head;
                iterateSmall= iterateSmall->next;
                head=head->next;
            }else{
                iterateGreat->next= head;
                iterateGreat=iterateGreat->next;
                head=head->next;
            }
            
        }
        iterateSmall->next = great->next;
        iterateGreat->next = NULL;
        
        return small->next;
        
    }
};