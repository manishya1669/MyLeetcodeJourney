// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
       string str = "";
       stack<char>st;
       for(int i=0;i<s.length();i++){
           if(st.empty()){
               st.push(s[i]);
           }else{
               if(st.top() != s[i]){
                   st.push(s[i]);
               }
           }
       }
       while(!st.empty()){
           str+=st.top();
           st.pop();
       }
       reverse(str.begin(),str.end());
       return  str;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends