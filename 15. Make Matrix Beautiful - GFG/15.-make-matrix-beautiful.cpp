// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
       vector<int>sums;
       int maxi =0;
       for(int i=0;i<n;i++){
           int sumRow =0;
           int sumCol =0;
           for(int j =0;j<n;j++){
               sumRow+=matrix[i][j];
               sumCol +=matrix[j][i];
           }
           sums.push_back(sumRow);
           maxi = max(maxi,max(sumRow,sumCol));
           
       }
       int res =0;
       for(auto it:sums){
           res +=maxi-it;
       }
       return res;
       
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends