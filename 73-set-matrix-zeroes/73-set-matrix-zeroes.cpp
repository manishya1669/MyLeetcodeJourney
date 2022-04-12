class Solution {
public:
   void setZeroes(vector<vector<int>>& matrix) {
        int rowsize=matrix.size();
        int colsize=matrix[0].size();
        vector<int>rowmaker(rowsize,1);
        vector<int>colmaker(colsize,1);
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                if(matrix[i][j]==0){
                    rowmaker[i]=0;
                    colmaker[j]=0;
                }
            }
        }
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                if(rowmaker[i]==0 or colmaker[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};