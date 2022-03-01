class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int>umap;
        
        int n = s.length();
        int m = t.length();
        int count =0;
        for(auto it : s){
            umap[it]++;
        }
        for(auto it: t){
            umap[it]--;
        }
        for(auto it:umap){
            count +=abs(it.second);
        }
        return count;
        
    }
};