class Solution {
public:
    
//     bool subset(vector<int>nums,int sum){
        
//     }
    bool canPartition(vector<int>& nums) { 
        int n=nums.size();  
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }   
    if(sum%2!=0)
        return false;
    
    int dp[n+1][sum/2+1];
        
        for(int i =0;i<=n;i++){
            for(int j =0;j<=sum/2;j++){
                if(i==0)dp[i][j]=false;
                else if(j==0)dp[i][j]=true;
                
                else if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum/2];
    }
};


// int sum = 0;
//         int n   = nums.size();
        
//         for(auto it:nums){
//             sum +=it;
//         }
        
//         if(sum & 1)
//             return false;     
    
//        bool dp[n+1][sum/2+1];

//         for(int i = 0;i<=n;i++)
//         for(int j = 0;j<=sum/2;j++){
//             if(i ==0 || j == 0) 
//                 dp[i][j]= false;
//             else if(nums[i-1]>j)
//                 dp[i][j] =dp[i-1][j];
//             else if(nums[i-1] == j)
//                 dp[i][j] =true;
//             else
//                 dp[i][j] = dp[i -1][j] || dp[i-1][j - nums[i-1]];
                
            
            
//         }
//         return dp[n][sum/2];