class Solution {
public:
   
            
        
    
    vector<int> sequentialDigits(int low, int high) {
        string number = "123456789";
        vector<int>result;
        int ll = to_string(low).length();
        int hl = to_string(high).length();
        
        for(int i = ll;i<=hl;i++){
            for(int j = 0;j<10-i;j++){
                int num = stoi(number.substr(j,i));
                if(num>=low && num<=high)result.push_back(num);
            }
        }
        return result;
    }
};