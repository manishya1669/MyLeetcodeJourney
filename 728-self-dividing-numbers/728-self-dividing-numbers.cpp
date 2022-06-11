class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>v;
        
        while(left<=right){
            int j = left;
           
            
            while(j > 0){
                int x = j %10;
                if( x==0  || left % x !=0){
                    break;
                }
                j = j/10;
            }
            if(j ==0){
                v.push_back(left);
            }
            left++;
        }
        return v;
    }
};