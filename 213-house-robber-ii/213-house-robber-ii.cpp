class Solution {
public:
    
    int robber(vector<int>&v){
        int n = v.size();
        int dp[n+1];
        dp[0]=v[0];
        dp[1]= max(v[0],v[1]);
        for(int i=2;i<n;i++){
            dp[i]= max(dp[i-1],dp[i-2]+v[i]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
//int dp[n];
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        
        
      
        vector<int>v1(nums.begin(),nums.end()-1);
        vector<int>v2(nums.begin()+1,nums.end());
        return max(robber(v1),robber(v2));
       
    }
};