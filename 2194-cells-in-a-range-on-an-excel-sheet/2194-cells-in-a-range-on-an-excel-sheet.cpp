class Solution {
public:
    vector<string> cellsInRange(string s) {
      vector<string>v;
       
        for(char c = s[0];c<=s[3];c++){
           for(char m = s[1];m<=s[4];m++){
               v.push_back({c,m});
           }  
        }
        
    return v;
    }
};