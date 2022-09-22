class Solution {
public:
    string reverseWords(string s) {
        
        int i=0;
         string str;
        string ans;
        for(int i =0;i<s.length();i++){
           
            if(s[i] !=' ' ){
                str+=s[i];
                cout<<str<<endl;
                
            }else{
                reverse(str.begin(),str.end());
                cout<<str<<endl;
                str+=s[i];
                ans+=str;
                str="";                
            }
            
            
        }
        cout<<ans<<endl;
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};