class Solution {
public:
    int LCS(string s1, string s2){
        int n= s1.length();
        int m = s2.length();
        int dp[n+1][m+1];
        
        for(int  i=0;i<=n;i++){
            for(int j =0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]= 0;
            }
        }
        
        for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                   { dp[i][j]= 1 + dp[i-1][j-1];
                    cout<<dp[i][j]<<" ";}
                
                else
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[n][m];
        
        
    }
    bool isSubsequence(string s, string t) {
        
        int mini = min(s.length(),t.length());
        if(s.length()==0  )return true;
        if(t.length()==0)  return false;
        int x = LCS(s,t);
        return x==mini?true:false;
       
    }
};