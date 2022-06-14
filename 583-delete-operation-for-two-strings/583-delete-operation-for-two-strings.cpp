class Solution {
public:
    int LCS(string x,string y, int n,int m,int dp[501][501]){
        
        if(m==0 || n==0)
            return  0;
        
        if(dp[n][m] !=-1)
            return dp[n][m];
        
        if(x[n-1] == y[m-1]){
             return dp[n][m]=  1 + LCS(x,y,n-1,m-1,dp);
        }
        else{
            return dp[n][m]= max(LCS(x,y,n-1,m,dp) , LCS(x,y,n,m-1,dp));
        }
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