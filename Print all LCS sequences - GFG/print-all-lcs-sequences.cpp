// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	int countLcs(string s,string t){
     int n=s.size();
     int m=t.size();
     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     for(int i=0;i<=n;i++){
         for(int j=0;j<=m;j++){
             if(i==0 || j==0)dp[i][j]=0;
             else if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
             else {
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
         }
     }
     return dp[n][m];
}
set<string>st;
void helper(string s,string t,int i,int j,string &temp,vector<string>&ans,int count){
   
    if(count==0){
        if(st.find(temp)==st.end())
            { st.insert(temp);
            ans.push_back(temp);}
        
        return;
    }
   if(i>=s.size() || j>=t.size())return;

   
    for(int r=i;r<s.size();r++){
        for(int c=j;c<t.size();c++){
            if(s[r]==t[c]){
                
                temp.push_back(s[r]);
                helper(s,t,r+1,c+1,temp,ans,count-1);
                temp.pop_back();
            }
        }
    }
}
 vector<string> all_longest_common_subsequences(string s, string t)
 {
     // Code here
    int a=countLcs(s,t);
    vector<string>ans;
    string temp="";
   helper(s,t,0,0,temp,ans,a);
   sort(ans.begin(),ans.end());
    return ans;
 }
// 	  string longestCommonSubsequence(string s1,string s2,int n , int m,int dp[51][51]){
	      
// 	      for(int i=0;i<=n;i++){
// 	          for(int j =0;j<=m;j++){
// 	              if(i==0 || j==0)
// 	                  dp[i][j]=0;
// 	          }      
// 	      }
	      
// 	      for(int i=1;i<=n;i++){
// 	          for(int j=1;j<=m;j++){
// 	              if(s1[i-1] ==s2[j-1]){
// 	                  dp[i][j]=1 + dp[i-1][j-1];
// 	              }
// 	              else{
// 	                  dp[i][j]=max(dp[i-1][j] ,dp[i][j-1]);
// 	              }
	              
// 	          }
// 	      }
	          
// 	          int i=n;
// 	          int j =m;
// 	          string s;
// 	          while(i>0 && j>0){
// 	              if(s1[i-1] ==s2[j-1]){
// 	                  s.push_back(s1[i-1]);
// 	              }else{
// 	                  if(dp[i][j-1]>dp[i-1][j]){
// 	                      j--;
// 	                  }else{
// 	                      i--;
// 	                  }
// 	              }
// 	          }
// 	          reverse(s.begin(),s.end());
// 	          return s;
	          
	          
	          
	          
	      
// 	  }
// 		vector<string> all_longest_common_subsequences(string s, string t)
// 		{
// 		   int n = s.length();
// 		   int m = t.length();
// 		   int dp[51][51];
// 		   vector<string>v;
// 		   string str =  longestCommonSubsequence(s,t,n,m,dp);
// 		   v.push_back(str);
		   
// 		   return v;
// 		}
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	vector<string> ans = ob.all_longest_common_subsequences(s, t);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}

  // } Driver Code Ends