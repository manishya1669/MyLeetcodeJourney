class Solution {
public:
    int dp[3001][3001];
    int Mod = 1e9 +7;
    int solve(int startpos,int endpos,int k){
        if(startpos==endpos && k==0)return 1;
        if(k<abs(startpos-endpos))return 0;
        
        if(dp[startpos+1000][k] != -1){
            return dp[startpos+1000][k];
        }
        int left = solve(startpos-1,endpos,k-1);
        int right = solve(startpos+1,endpos,k-1);
        return dp[startpos+1000][k]=(left+right)%Mod;
    }
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(startPos,endPos,k);
    }
};