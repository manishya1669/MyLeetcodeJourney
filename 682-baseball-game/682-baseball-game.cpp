class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        for(string i :ops){
            if(i=="C"){
                s.pop();
            }
            else if(i=="D"){
                s.push(s.top()*2);
            }
            else if(i=="+"){
                int first = s.top();
                s.pop();
                int second = s.top();
                s.push(first);
                s.push(first + second);
            }
            else{
                s.push(stoi(i));
            }
            
        }
        int ans =0;
        while(!s.empty()){
            ans +=s.top();
            s.pop();
            
        }
        return ans;
    }
};