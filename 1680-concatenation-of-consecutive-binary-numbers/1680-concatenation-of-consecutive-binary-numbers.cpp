class Solution {
public:
   
    int concatenatedBinary(int n) {
     long long int ans=0;
        int i=1;
        long long MOD= 1000000007;
        while(i<=n){
            ans= ((      ans<<(1+ int(log2(i)))                   ) %MOD +i)%MOD;
                 i++;
        }
        return ans;
       
    }
};