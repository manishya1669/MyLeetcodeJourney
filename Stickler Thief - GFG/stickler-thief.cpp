//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        if(n==0)return 0;
        if(n==1)return arr[0];
        if(n==2)return max(arr[0],arr[1]);
        
        vector<int>ans(n,0);
        ans[0]=arr[0];
        ans[1]= max(arr[0],arr[1]);
        for(int i =2;i<n;i++){
           
                ans[i]=max(arr[i]+ans[i-2],ans[i-1]);
            
        }
        return ans[n-1];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends