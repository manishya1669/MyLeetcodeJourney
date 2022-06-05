class Solution {
public:
   int dfs(vector<int>& queen, int n, int pos){
        if (pos == n) return 1;
        int res = 0;
        for (int i = 0 ;i < n; i++){
            bool flag = true; // flag to check conflict
            for (int j = 0; j < pos; j++){
                if (i == queen[j]|| pos - j == i - queen[j] || pos-j == queen[j]-i){
                    flag = false;
                    break;
                }
            }
            
            if (flag) {
                queen[pos] = i;
                res+=dfs(queen, n, pos+1);
            }
        }
        
        return res;
    }
    int totalNQueens(int n) {
        vector<int> queen(n, 0);
        return dfs(queen, n, 0);
    }
};