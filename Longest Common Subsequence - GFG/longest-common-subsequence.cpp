// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcss(int x, int y , string &s1, string &s2,int dp[1001][1001]){
        
        if(x==0 ||  y ==0)
             return 0;
             
        if(dp[x][y] != -1)
            return dp[x][y];
            
        if(s1[x-1] == s2[y-1])
           {dp[x][y]= 1 + lcss(x-1,y-1,s1,s2,dp);
           return dp[x][y];}
        
        else{
            dp[x][y]=max(lcss(x-1,y,s1,s2,dp),lcss(x,y-1,s1,s2,dp));
            return dp[x][y];
        }
        
    }
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        
        return lcss(x,y,s1,s2,dp);
       
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends