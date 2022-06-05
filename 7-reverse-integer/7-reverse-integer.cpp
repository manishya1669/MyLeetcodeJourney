class Solution {
public:
    int reverse(int x) {
      int    y= x;
        x=abs(x);
        
        long long rev =0;
        while(x>0){
            int digit = x % 10;
            rev = (rev * 10)+ (digit %10);
            x = x/10;
        }
        if(rev >INT_MAX || rev<INT_MIN)return 0;
        
        
        return y<0?rev * -1:rev;
        
    }
};