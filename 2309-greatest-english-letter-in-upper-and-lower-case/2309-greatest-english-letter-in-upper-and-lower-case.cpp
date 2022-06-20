class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<char,int>umap;
            
            for(auto x:s){
                umap[x]++;
            }
        sort(s.begin(),s.end());
        string str = "";
        for(auto x:s){
            
            char lowerletter = tolower(x);
            char upperletter = toupper(x);
            if(umap[lowerletter] && umap[upperletter]){
                str = upperletter;
            }
        }
        return str;
    }
};