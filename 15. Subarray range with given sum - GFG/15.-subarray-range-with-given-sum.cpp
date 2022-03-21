// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
       //Your code here
       int c=0,s=0;
       unordered_map<int,int> u;
       u.insert({0,1});
       for(int i=0;i<n;i++){
           s=s+arr[i];
           auto it=u.find(s-sum);
           if(it!=u.end()){
               c+=it->second;
           }
           u[s]++;
       }
       return c;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends