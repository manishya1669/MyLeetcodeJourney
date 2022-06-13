class Solution {
public:
   
 
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        int dp[1001][1001];
            memset(dp,0,sizeof(dp));

        return lcs(text1,text2,n,m,dp);
    }
      int lcs(string &t1,string &t2, int n, int m ,int dp[][1001]){
       if(n==0 || m==0){
           return 0;
       }
       //Memoization
       if(dp[n][m] != 0)
           return dp[n][m];
       
       if(t1[n-1] == t2[m-1]){
           return dp[n][m] = 1 + lcs(t1,t2,n-1,m-1,dp);
       }
       else{
           return dp[n][m]= max(lcs(t1,t2,n-1,m,dp),lcs(t1,t2,n,m-1,dp));
       }
           
   }
};