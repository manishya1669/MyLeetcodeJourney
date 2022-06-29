// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
      vector<int>count(N,1);
       int res= INT_MIN;
       for(int i =0;i<N;i++){
           for(int j =0;j<i;j++){
               int temp=abs(A[i]-A[j]);
               if(temp ==1 && count[i]<=count[j]+1){
                   count[i]= count[j]+1;
                   
               }
               
           }
          
       }
       for(auto x:count) res= max(res,x);
       return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends