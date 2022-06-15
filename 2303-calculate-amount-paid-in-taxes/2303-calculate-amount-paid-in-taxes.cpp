class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
       double tax = 0;
        int hun=100;
        
        for(int i =0;i<brackets.size();i++){
            if(i==0){
                
                
                if(income>brackets[i][0]){
                    tax+= (double)brackets[i][0] *((double)brackets[i][1])/hun;
                }else{
                    tax += income * ((double)brackets[i][1])/hun;
                    break;
                }
            }
            
            else{
                if(income>(double)brackets[i][0]){
                    tax+=( (double)brackets[i][0] -(double)brackets[i-1][0])*((double)brackets[i][1])/hun;
                }else{
                    tax+= (income - (double)brackets[i-1][0])*((double)brackets[i][1])/hun;
                    break;
                }
            }
        }
        return tax;
    }
};