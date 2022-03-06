class Solution {
public:
    int countOrders(int n) {
        vector<long long> dp(n+1);
        dp[1]=1;
        int m=1e9+7;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]%m*((2*i-1)%m*(i)%m)%m)%m;
        }
        return (int)dp[n]%m;
    }
};