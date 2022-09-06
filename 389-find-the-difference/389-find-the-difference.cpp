class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.length();
        int m = t.length();       
        unordered_map<char,int>umap;
        for(int  i =0;i<m;i++){
                umap[t[i]]++; 
        }
          for(int  i =0;i<n;i++){
                umap[s[i]]--; 
        }
        char ans ;
        for(auto x:umap){
            if(x.second ==1){
                ans = x.first;
            }
        }
        return ans;
    }
};