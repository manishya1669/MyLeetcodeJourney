class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index =0;
        int n = s.length();
        for(int i =0;i<t.length();i++){
            if(s[index]==t[i]){
                index++;
            }
        }
        return n==index?true:false;
    }
};