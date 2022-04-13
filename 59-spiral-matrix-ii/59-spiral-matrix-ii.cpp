class Solution {
public:
       vector<vector<int>> generateMatrix(int n) {
      int count=1;
        int i=0,j=0;
        vector<vector<int>> result(n,vector<int>(n,-1));
        while(count<=n*n)
        {   
            //Move right
            while(j<n&&result[i][j]==-1)
            { result[i][j]=count;     
                count++;
                j++;
            }
             j--;
             i++;
            //Move down
            while(i<n&&result[i][j]==-1)
            {   result[i][j]=count;     
                count++;
                i++;
            }
            i--;
            j--;
            //Move left
             while(j>=0&&result[i][j]==-1)
            {
                result[i][j]=count;     
                count++;
                j--;
            }
             i--;   
             j++;
         
            //Move up
             while(i>=0&&result[i][j]==-1)
            {
                result[i][j]=count;     
                count++;
                i--;
            }
            i++;
            j++;
            
        }
        
        return result;
    }
};