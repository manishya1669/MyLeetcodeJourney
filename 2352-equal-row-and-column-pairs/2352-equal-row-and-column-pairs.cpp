class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n= grid.size();
        int m = grid[0].size();
        
        map<vector<int>,int>umap1,umap2;
        
        for(int i =0;i<n;i++){
            umap1[grid[i]]++;
        }
        for(int j=0;j<n;j++){
            vector<int>v;
            for(int i=0;i<m;i++){
                v.push_back(grid[i][j]);
            }
            umap2[v]++;
        }
        int ans=0;
        for(auto x:umap1){
            for(auto y:umap2){
                if(x.first==y.first){
                    ans +=x.second*y.second;
                }
            }
        }
        return ans;
        
        
    }
};