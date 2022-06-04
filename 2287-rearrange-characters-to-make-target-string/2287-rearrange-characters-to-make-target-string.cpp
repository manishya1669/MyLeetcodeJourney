class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        unordered_map<char,int>str,tar;
        
        for(auto x:s)str[x]++;
        for(auto x:target )tar[x]++;
        
        int ans = INT_MAX;
        for(auto x: target){
            ans = min(ans,str[x]/tar[x]);
        }
        return ans;
        
        
        }
};