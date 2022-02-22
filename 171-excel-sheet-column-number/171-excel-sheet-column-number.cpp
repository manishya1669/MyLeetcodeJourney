class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int result =0;
        for(auto s:columnTitle){
            int d = s -'A' +1;
            result = result*26 +d;
        }
        return result;
    }
};