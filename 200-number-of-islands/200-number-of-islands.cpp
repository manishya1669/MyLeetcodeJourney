class Solution {
public:
    bool valid(int i ,int j ,int n, int m,vector<vector<char>>&grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]=='1'){
            return true;
        }
        return false;
    }
    void check(int i ,int j ,int n,int m, vector<vector<char>>&grid){
        grid[i][j]='0';
        
        if(valid(i+1,j,n,m,grid)){
            check(i+1,j,n,m,grid);
        }
        if(valid(i-1,j,n,m,grid)){
           check(i-1,j,n,m,grid);

        }
        if(valid(i,j+1,n,m,grid)){
          check(i,j+1,n,m,grid);

        }
        if(valid(i,j-1,n,m,grid)){
           check(i,j-1,n,m,grid);

        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
     
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                
                if(grid[i][j]=='1'){
                    count++;
                    check(i,j,n,m,grid);
                }
            }
        }
        return count;
    }
};