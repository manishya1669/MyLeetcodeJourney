// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
   int LCS(string s1, string s2 ,int n ){
       
       int dp[n+1][n+1];
       
       for(int i =0;i<=n;i++){
           for(int j =0;j<=n;j++){
               
               if(i==0  || j==0)
                   dp[i][j]=0;
           }
       }
       for(int i =1;i<=n;i++){
           for(int j =1;j<=n;j++){
               if(s1[i-1]==s2[j-1]){
                   dp[i][j]= 1 + dp[i-1][j-1];
               }
               else{
                   dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
      // cout<<dp[n][n];
       return dp[n][n];
       
       
       
   }
    int longestPalinSubseq(string A) {
        string B= A;
        reverse(B.begin(),B.end());
        int n = A.length();
        
        int ans = LCS(A,B,n);
        //cout<<ans<<" ";
        return ans;
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends