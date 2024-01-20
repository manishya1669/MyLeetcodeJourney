class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        for(int i =0;i<s.length();i++){
            char c = s[i];
            switch(c){
                    
                case '(':
                    st.push(')');
                    break;
                    
                case '{':
                    st.push('}');
                    break;
                
                case '[':
                    st.push(']');
                    break;
                    
                default:
                    if(!st.empty() && st.top()==s[i]){
                        st.pop();
                    }
                     else{
                        return false;
                    }
                    break;
            }
        }
        return st.empty();
    }
};