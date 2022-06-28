class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
         
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
        }
        if(sum < abs(target) || (target+sum) %2 != 0) return 0;
        int  s1 = ( sum + target)/2;
        // Why to do this " sum + target"/ 2 So this is because to 
        // solve it like a differnce fo subset problem
        // where you have to divide a array into subset whose differce is given 
        // i.e
        //
        //  positibe sum = s1
        //  negative sum = s2;
        // s1 -s2        = target     i.e ( 1+ 1+ 1+ 1+) - (1)
        // similarlt
        // s1 + s2       = total Sum;
        // USing both equations,
        // 2s1 = target + total sum;
        // s1 = (target + totalSum)/2;
        // Now you have to find no. of ways to get sum s1;
        
        // Uing subset problem
        int n= nums.size();
        int dp[n+1][s1+1];
        
        for(int i =0;i<=n;i++){
            for(int  j =0;j<=s1;j++){
                if(i==0)dp[i][j]=0;
                
                if(j==0)dp[i][j]=1;   
            }
        }
         for(int i =1;i<=n;i++){
            for(int  j =0;j<=s1;j++){
               if(nums[i-1]<=j)
                   dp[i][j]= dp[i-1][j-nums[i-1]] + dp[i-1][j];
                
                else{
                dp[i][j]= dp[i-1][j];
            }
            }
             
        }
       return dp[n][s1];
    }
};