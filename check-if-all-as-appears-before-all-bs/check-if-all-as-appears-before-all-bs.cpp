class Solution {
public:
    bool checkString(string s) {
      string ne=s;
        sort(s.begin(),s.end());
        return ne == s?true:false;
       
        
    }
};