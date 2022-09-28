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
    int  reverse(ListNode * head){
        ListNode * dummy = NULL;
        int count =0;
        while(head != NULL){
            
            // ListNode * next = head->next;
            // head->next= dummy;
            // dummy=head;
            // head=next;
            count++;
            head=head->next;
            
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL )return head;
        ListNode  * temp = head;
        ListNode *news= head;
        int ans = reverse(head);
         if(ans==n)
      {
          // ListNode *node=head;
          // head=head->next;
          // delete node;
          return head->next;
      }
        cout<<"ans:"<<ans<<endl;
        int x = ans-n;
        int count =1;
        ListNode * prev=NULL;
       
        while(count<x){
            count++;
            temp=temp->next;
            cout<<temp->val<<endl;
        }
        ListNode*nodeth=temp->next;
        ListNode*nexth=nodeth->next;
        temp->next=nexth;
        return news;

        
    }
};