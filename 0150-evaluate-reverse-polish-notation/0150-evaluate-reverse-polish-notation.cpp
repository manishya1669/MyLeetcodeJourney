class Solution {
public:
  bool is_operator(const string& s) {
        return s == "+" || s == "-" || s == "*" || s == "/";
    }
    int evalRPN(vector<string>& tokens) {
        
        int n =tokens.size();
        // unordered_map<char,int>umap{{'+',1},{'-',1},{'*',1},{'/',1}};

        stack<int>st;
        for(auto x:tokens){
            if(is_operator(x)){
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                if(x=="+"){
                    st.push((first+second));
                     cout<<"+:"<<first+second<<endl;
                }
                else if(x=="/"){
                    st.push(first/second);
                    cout<<"/:"<<first/second<<endl;
                }
                else if(x=="-"){
                    st.push(first-second);
                }
                else if(x=="*"){
                    st.push(first*second);
                }
            }else{
               int a= stoi(x);
                st.push(a);
            }
        }
        return st.top();
    }
};