// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        int count =0;
        int i=0;
        int j =0;
        while(i<A.size() && j<B.size()){
            if(A[i] == B[j])
                 i+=1;
                 
            j+=1;
        }
        return i==A.size();
        
        
    }
};

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans == true)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends