class Solution {
public:
    int longestIdealString(string s, int k) {
        int count =0;
        int n = s.length();
         int ans =1;
         unordered_map<char,int>umap;
         umap[s[0]]=1;
         for(int i =1;i<n;i++){
             int maxi = 1;
             for(auto x:umap){
                 if(abs(s[i]-x.first ) <=k){
                   maxi= max(maxi, x.second +1);
                 }
             }
             umap[s[i]]= maxi;
             ans = max(ans,maxi);
         }
            
        
        return ans;
    }
};