class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        if(num ==0 || num<10)return num;
        while(num>0){
           sum=sum+ num%10;
            num=num/10;
            if( num==0 && sum>9){
                num=sum;
                sum=0;
            }
        }
        return sum;
    }
};