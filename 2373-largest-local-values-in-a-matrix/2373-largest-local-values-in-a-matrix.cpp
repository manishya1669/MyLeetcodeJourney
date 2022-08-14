class Solution {
    
    int findd(vector<vector<int>>& grid,int m,int n){
        int maxi = INT_MIN;
        for(int i =m;i<=m+2;i++){
            for(int j =n;j<=n+2;j++){
                maxi = max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
         int n= grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2,0));
       
    
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                ans[i][j]= findd(grid,i,j);
            }
        }   
     return ans;
    }
};