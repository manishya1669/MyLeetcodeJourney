class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int n= s.length();
        int count =0;
        stack<int>st;
         for(char x:s){
             if(x =='(')
             {
                 st.push(count);
                 count =0;
             }
             else{
                 count +=st.top() + max(count,1);
                 st.pop();
             }
         }
       return count;
    }
};