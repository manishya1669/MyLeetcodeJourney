class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     
        priority_queue<int>pq(nums.begin(),nums.end());
        int ans;
         for(int i=1;i<=k;i++){
             if(i==k)
                 ans =pq.top();
             
             pq.pop();
             
         }
        return ans;
    }
};