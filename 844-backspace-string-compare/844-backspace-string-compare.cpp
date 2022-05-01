class Solution {
public:
    
    string find(string s){
        int n = s.length();
        string res ="";
        int count=0;
        for(int i =n-1;i>=0;i--){
                     
            if(s[i]=='#')
                count++;
            else{
                if(count>0)
                    count--;
                else{
                    res+=s[i];
                }
            }
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return find(s)==find(t);     
    }
};