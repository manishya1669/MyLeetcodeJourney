class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        f(s, 0, ans, res);
        return res;
    }
    
    void f(string s,int ind,vector<string> &ans, vector<vector<string>> &res){
        if(ind==s.size()){
            res.push_back(ans);
            return;
        }
        for(int i=ind; i<s.size(); i++){
            if(isPalindrome(s, ind, i)){
                ans.push_back(s.substr(ind, i-ind+1));
                f(s, i+1, ans, res);
                ans.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end)  {
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    } 
    
    
};