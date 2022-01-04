class Solution {
public:
    int bitwiseComplement(int n) {
        int i =0;
        int sum =0;
      
        if(n ==0)return 1;
        while(n ){
            int a = n%2;
            if(a==0)
                sum +=pow(2,i);
            
            i++;
            n=n/2;
        }
        return sum;
    }
};