class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>umap;
        for(int i =0;i<t.length();i++){
            umap[t[i]]++;
        }
        for(int i= 0;i<s.length();i++){
            umap[s[i]]--;
        }
        
        for(auto it:umap){
            if(it.second ==1)
            return it.first;
        }
        return 'm';
    }
};