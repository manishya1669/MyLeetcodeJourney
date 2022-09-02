class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
     
        int dp[1001][1001];
        
        int maxi = INT_MIN;
        
        for(int i =0;i<=n;i++){
            for(int j =0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
         for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
               
                 if(nums1[i-1]==nums2[j-1])
{                    dp[i][j]= 1+dp[i-1][j-1];
                    }
                     
                else{
                    dp[i][j]= 0;
                }
                maxi = max(dp[i][j],maxi);
            }
        } 
        return maxi;
            
    }
};