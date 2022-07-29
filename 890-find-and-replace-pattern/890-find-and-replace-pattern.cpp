class Solution {
public:
   bool possible(string &st1, string &st2){

    unordered_map<char,int> mpp1, mpp2;
    for(int i = 0; i<st1.size(); i++){
        if(mpp1[st1[i]] != mpp2[st2[i]]) return false;
        mpp1[st1[i]] = i+1;
        mpp2[st2[i]] = i+1;
                    
    }
    return true;
}


vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    
    vector<string> ans;
 for(auto it: words){
    if(possible(it, pattern))
     ans.push_back(it);
 }    
    return ans;
}
};