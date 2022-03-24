// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
       int i=0,j=0,temp[4]={2,3,5,7},count=4,val;
       vector<int> ans;
       ans.push_back(2);
        ans.push_back(3);
         ans.push_back(5);
          ans.push_back(7);
       while(count<=n)
       {
           j=0;
           while( j<4 && count<=n )
           {
               val=ans[i]*10 + temp[j];
               ans.push_back(val);
               count++;
               j++;
           }
           i++;
       }
       return ans[n-1];
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}
  // } Driver Code Ends