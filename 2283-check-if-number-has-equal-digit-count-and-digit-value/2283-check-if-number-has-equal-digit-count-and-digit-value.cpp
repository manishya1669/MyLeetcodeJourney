class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>umap;
        
        for(auto x:num){
            umap[x - '0' ]++;
        }
        
        for(int i =0;i<num.length();i++){
            if(umap[i] != num[i] -'0' )
                return false;
        }
        return true;
    }
};