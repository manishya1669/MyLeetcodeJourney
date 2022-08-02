class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int> pq;
        int n = matrix.size();
        
        for(int i =0;i<n;i++){
            for(int j = 0;j<n ;j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k)pq.pop();
            }
        }
        return pq.top();
//         if(n*m  < k)return 0;
//         if(n*m==1)return matrix[0][0];
//         int i =0,j=0;
        
//         while(k>1){
            
//             while(k>m){
//                 k=k-m;
//                 i++;
//             }
//             if(k>1){
//                 k=k-1;
//                 j++;
//             }
//         }
//         int ans = matrix[i][j];
//         return ans;
    }
};