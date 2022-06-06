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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
       
        long long lenA = 0;
        int lenB= 0;
        ListNode * tempA=headA;
        ListNode * tempB=headB;
        
        while(tempA != NULL)
           { lenA++;
             tempA=tempA->next;
           }
        
        while(tempB != NULL)
            {lenB++;
             tempB=tempB->next;
            }
        
        int diff = abs(lenA - lenB);
        tempA =headA, tempB= headB;
        if(lenA>lenB){
            while(diff >0)
               { tempA=tempA->next; 
                diff--;}
        }else{
            while(diff >0)
               { tempB=tempB->next;
                 diff--;}
        }
        
        while(tempB != tempA){
            
            tempB=tempB->next;
            tempA=tempA->next;
            if(tempB == NULL || tempA== NULL)return NULL;
        }
        return tempB;
        
    }
};