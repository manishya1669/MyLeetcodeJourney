class Solution {
public:
    
    int fun(vector<int>&nums, int target ,int dp[]){
        if(target ==0)return 1;
        if(target <0)return 0;
        if(dp[target] != -1){
            return dp[target];
            
        }
        int ans=0;
        for(auto x:nums){
            ans+= fun(nums,target-x,dp);
        }
        dp[target]= ans;
        return dp[target];
        
    }
    int combinationSum4(vector<int>& nums, int target) {
        int dp[target+1];
        memset(dp,-1,sizeof(dp));
       //vector<int>dp(target+1,-1);
        
        return fun(nums,target,dp);
    }
};