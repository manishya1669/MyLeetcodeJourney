// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
       
       priority_queue<int,vector<int>,greater<int>>minh;
       
       for(int i = 0;i<n;i++){
           minh.push(arr[i]);
       }
       vector<int>v;
       while(minh.size() >0){
           v.push_back(minh.top());
           minh.pop();
       }
       sort(v.begin(),v.end(),greater<int>());
       return v[k-1];
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.KthLargest(arr, n, k) << endl;
    }

    return 0;
}  // } Driver Code Ends