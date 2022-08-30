class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n =matrix.size();
       // vector<vector<int>> matrixs(matrix.size(),vector<int>(n,0));
       
        for(int i =0;i<n;i++){
           // vector<int>temp;
            for(int j =0;j<i;j++){
               // cout<<"before:"<<matrix[i][j]<<matrix[j][i]<<endl;
                swap(matrix[i][j],matrix[j][i]);
                 //temp.push_back(matrix[i][j]);
                
            }
           // matrixs.push_back(temp);
            
        }
        
        
      
        
        
       
        for(int i =0;i<n;i++){
             int col1=0,col2=n-1;
            while(col1<=col2){
                swap(matrix[i][col1],matrix[i][col2]);
                col1++;
                col2--;
            }
        }
        // for(int i =0;i<n;i++){
        //     for(int )
        // }
        
    }
};