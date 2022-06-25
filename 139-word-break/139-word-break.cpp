class Solution {
public:
        
          bool wordBreak(string s, vector<string>& w) {
      int n=s.length();
      unordered_set<string>m(w.begin(),w.end());
      int dp[n+1];
      memset(dp,0,sizeof dp);
      dp[n]=1;
      for(int i=n-1;i>=0;i--)
      {
        string t="";
        for(int j=i;j<n;j++)
        {
          t+=s[j];
          if(m.find(t)!=m.end())
            if(dp[j+1]==1)
              dp[i]=1;
        }
      }
        return dp[0];
    }

    
};