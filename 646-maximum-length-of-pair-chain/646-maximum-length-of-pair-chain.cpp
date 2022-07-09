class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int>&b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<int>lis(n,1);
        sort(pairs.begin(),pairs.end(),comp);
        
        for(int i =1;i<n;i++){
            for(int j =0;j<i;j++){
                if(pairs[j][1] <pairs[i][0] && lis[i]< lis[j] +1 ){
                    lis[i]= lis[j]+1;
                }
            }
        }
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
             maxi = max( maxi,lis[i]);
        }
        return maxi;
    }
};