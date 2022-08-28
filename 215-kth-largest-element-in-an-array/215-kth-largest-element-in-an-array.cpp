class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q(nums.begin(),nums.end());
        int n = nums.size()-k;
        while(n--){
            q.pop();
        }
        return q.top();
    }
};