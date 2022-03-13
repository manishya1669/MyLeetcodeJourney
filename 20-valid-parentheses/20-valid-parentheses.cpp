class Solution {
public:
    bool isValid(string s) {
     stack<char>sta;
        
        for(auto it:s){
            
            switch(it){
                case ('('):
                    sta.push(')');
                    break;
                case ('{'):
                    sta.push('}');
                    break;
                case ('['):
                    sta.push(']');
                    break;
                default:
                    if(sta.size()>0 && sta.top()== it){
                        sta.pop();
                    }
                    else{
                        return false;
                    }
            }
        }
        return sta.empty();
    }
};