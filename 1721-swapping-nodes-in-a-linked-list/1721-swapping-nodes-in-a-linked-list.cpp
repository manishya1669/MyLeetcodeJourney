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
    int length(ListNode * head){
        int ans = 0;
        ListNode * curr = head;
        
        while(curr != NULL){
            ans++;
            curr = curr->next;
        }
        return ans;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int start = k;
        
        int end = length(head) -k +1;
        
        ListNode * startNode ;
        ListNode * endNode ;
        ListNode * curr = head;
        int count = 1;
        while(curr ){
            
            if(count == start)
                {startNode = curr;}
            
            if(count == end)
                {endNode =curr;}
            
            curr= curr->next;
            count++;
        }
        swap(startNode->val, endNode->val);
        
        return head;
        
       
        
    }
};