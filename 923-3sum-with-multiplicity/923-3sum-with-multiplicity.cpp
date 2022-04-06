class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         int res=0;
    int n=arr.size();
    
    unordered_map<int,int> hash;
    
    for(int i=0;i<n-1;i++)
    {   
        for(int j=i+1;j<n;j++)
                res+=hash[target-arr[i]-arr[j]];
     
        hash[arr[i]]++; 
     
      res%=int(1e9+7);
    }      
    
    return res;
    }
};