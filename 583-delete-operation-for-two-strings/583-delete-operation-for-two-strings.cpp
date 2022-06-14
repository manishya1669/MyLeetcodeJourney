class Solution {
public:
    int LCS(string &x,string &y, int n,int m,int dp[501][501]){
        
       //Initialization
        for(int i =0;i<=n;i++){
            for(int j = 0;j<=m;j++){
                if(i ==0 || j==0)
                    dp[i][j]=0;
            }
        }
        for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(x[i-1] == y[j-1])
                    {dp[i][j] = 1 + dp[i-1][j-1];}
                
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    
    
    int minDistance(string word1, string word2) {
        
        int n= word1.length();
        int m =word2.length();
        int dp[501][501];
        memset(dp,-1,sizeof(dp));
        int len = LCS(word1,word2,n,m,dp);
        return (n+m) -2*len;
    }
};