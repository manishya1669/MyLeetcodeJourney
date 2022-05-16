// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector<string>result(2);
        unordered_map<string ,int>umap;
        
        for(int i =0;i<n;i++){
            umap[arr[i]]++;
            
        }
        
        string s;
        int maxi =-1;
        
        for(auto x:umap){
            if(x.second>maxi){
                maxi = x.second;
                s = x.first;
            }
            if(x.second == maxi){
                s=(s<x.first)?s:x.first;
            }
        }
        result[0]=s;
        result[1]=to_string(maxi);
        
        return result;
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends