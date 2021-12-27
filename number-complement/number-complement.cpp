class Solution {
public:
    int findComplement(int num) {
        
        
        int count = 0;
        int temp = num;
        
        while(temp != 0){
            
            temp = temp >> 1; // divide by 2
            count = count + 1;
        }
        
        
        int a = (pow(2,count) - 1); // all ones
      //  cout << a;
        return num ^ a ;   
    }
};