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
    // ListNode* reve(ListNode*head){
    //     ListNode*dummy =NULL;
    //     while(head->next !=NULL){
    //         ListNode*temp = head->next;
    //         head->next=dummy;
    //         dummy=head;
    //         head=temp;
    //     }
    //     return dummy;
    // }
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL)return true;
        vector<int>v;
       // ListNode * head1=head;
//         ListNode*temp = reve(head);
        
        while(head !=NULL){
            int temp = head->val;
            v.push_back(temp);
            cout<<temp<<endl;
            head=head->next;
        }
        int i=0;
        int j = v.size()-1;
        while(i<=j){
            if(v[i] !=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};