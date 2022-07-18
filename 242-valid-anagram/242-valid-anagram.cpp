class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>umap;
        
        for(auto x:s){
            umap[x]++;
        }
        for(auto x:t){
            umap[x]--;
        }
        for(auto x:umap){
            if(x.second >0 || x.second<0)
                return false;
        }
        return true;
    }
};