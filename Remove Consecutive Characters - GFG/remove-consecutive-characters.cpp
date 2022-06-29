// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
         int i =0;
         int n = s.length();
         string str;
         for(int i =0;i<n;i++){
             if(s[i]==s[i+1]){
                 continue;
             }else{
                str+=s[i]; 
             }
         }
          
         return str;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends