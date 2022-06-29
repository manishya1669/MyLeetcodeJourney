class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        vector<int >v(n,0);
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        
        v[0]= nums[0];
        v[1]= max(nums[0],nums[1]);
        
        for(int i =2;i<n;i++){
            v[i]= max(v[i-1], v[i-2] + nums[i]);
        }
        return v[n-1];
    }
};