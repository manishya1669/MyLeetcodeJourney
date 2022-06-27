class Solution {
public:
    vector<vector<string>>v;
    
    bool ispalindrome(string s){
        int i =0,j=s.length()-1;
        
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    void result(string s, vector<string>ans){
        if(s.length()==0){
            v.push_back(ans);
            return;
        }
        
        for(int i =0;i<s.length();i++){
            string temp = s.substr(0,i+1);
            string last = s.substr(i+1);
            if(ispalindrome(temp)){
                ans.push_back(temp);
                result(last,ans);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>vec;
        result(s,vec);
        return v;
        
    }
};