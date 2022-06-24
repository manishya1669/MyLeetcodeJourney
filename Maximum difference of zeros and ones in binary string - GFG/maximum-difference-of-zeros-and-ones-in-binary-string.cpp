// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    int maxi=0;
	    int ma = INT_MIN;
	    for(int i =0;i<S.length();i++){
	        int x = S[i]=='0'?1:-1;
	        maxi +=x;
	        if(maxi>ma)ma= maxi;
	        if(maxi<0)maxi =0;
	    }
	   return ma;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends