class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m  =mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i =0;i<m;i++){
            int row =0;
            int col=i;
            vector<int>temp;
            while(row<n && col<m){
                temp.push_back(mat[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            col=i;
            row=0;
            for(int k =0;k<temp.size();k++){
                ans[row][col]=temp[k];
                row++;
                col++;
            }
        }
        
        for(int j =1;j<n;j++){
           int row=j;
           int col=0;
            vector<int>temp;
            while(col<m &&row<n){
               temp.push_back(mat[row][col]);
                col++;
                row++;
            }
            sort(temp.begin(),temp.end());
            
            row =j;
            col=0;
            
           for(int k=0;k<temp.size();k++){
               ans[row][col]=temp[k];
               row++;
               col++;
           }
            
            }
        return ans;
    }
};