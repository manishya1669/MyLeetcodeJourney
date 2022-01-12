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
    int pairSum(ListNode* head) {
        ListNode *curr = head;
        vector<int>v;
        // stack<int>s;
        
        while(curr !=NULL){
            v.push_back(curr->val);
            curr=curr->next;
          //  n++;
            
        }
        int n = v.size();
        
        int maxi =INT_MIN;
       for(int i = 0;i<n;i++){
           maxi = max(maxi,v[i] + v[n-1 -i]);
       }
        return maxi;
    }
};