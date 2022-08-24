class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s= to_string(n);
        int len = s.length();
        
        int index =0;
        bool flag = false;
        for(int i = len-1;i>0;i--){
            if(s[i-1]>s[i]){
                s[i-1] -=1;
                index=i;
                flag=true;
            }
        }
       if(flag){
            for(int i =index;i<len;i++){
            s[i]='9';
        }
       }
        return stoi(s);
        
    }
};