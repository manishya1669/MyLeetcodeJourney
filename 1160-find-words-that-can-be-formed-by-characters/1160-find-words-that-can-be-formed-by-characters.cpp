class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        unordered_map<char,int>umap;
        for(auto x:chars){
            umap[x]++;
        }
        int sum=0;
        for(auto wo:words){
            unordered_map<char,int>temp;
            bool flag = true;
            for(auto x:wo){
                temp[x]++;
            }
            for(auto ch:wo){
                if(umap[ch]<temp[ch]){
                    flag = false;
                }
            }
            if(flag)sum+=wo.length();
            
        }
        return sum;
    }
};