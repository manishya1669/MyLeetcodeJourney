class Solution {
public:
    int findLength(vector<int>& n1, vector<int>& n2) {
      
        int n = n1.size();
        int m = n2.size();
        int dp[1001][1001];
        int maxi = INT_MIN;
        for(int i =0;i<=n;i++){
            for(int j =0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]==0;
            
            }
        }
        for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(n1[i-1] == n2[j-1])
                    dp[i][j]=1+ dp[i-1][j-1];
                
                else{
                    dp[i][j]= 0;
                    
                }
                maxi = max(dp[i][j],maxi);
            }
        }
        return maxi;
    }
};