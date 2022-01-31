class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res =0;
        int m = accounts.size();
        int n = accounts[0].size();
        for(int i =0;i<m;i++){
            int sum =0;
            for(int j=0;j<n;j++){
                sum = sum + accounts[i][j];
                res=max(res,sum);
            }
        }
        return res;
    }
};