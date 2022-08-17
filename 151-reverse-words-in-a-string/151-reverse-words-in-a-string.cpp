class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        stack<string>ss;
        
        for(int i =0;i<n;i++){
            string str="";
            if(s[i]==' ')continue;
            while(s[i] != ' ' && i<n){
                str+=s[i];
                i++;
            }
            ss.push(str);
            cout<<str<<endl;
            
        }
        string word = ss.top();
        ss.pop();
        while(!ss.empty()){
            word+= " "+ ss.top();
            ss.pop();
            
        }
        return word;
    }
};