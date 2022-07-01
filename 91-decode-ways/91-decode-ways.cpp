class Solution {
public:
    int numDecodings(string s) {
        

        if(s[0] =='0' || s.length()==0)return 0;
                if(s.length() == 1) return 1;
        int count1=1;
        int count2 = 1;
        
        for(int  i =1;i<s.length();i++){
            int di = s[i]-'0';
            int hundi = (s[i-1] -'0')*10 +di;
            int count =0;
            if(di>0)count +=count2;
            if(hundi >=10 && hundi <=26)count+=count1;
            count1 = count2;
            count2=count;
        }
        return count2;
    }
};