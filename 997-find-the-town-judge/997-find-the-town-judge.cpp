class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int,int>umap;
        for(auto x:trust){
            vector<int>temp= x;
            int u = temp[0];
            int v = temp[1];
            cout<<"u:"<<u<<endl;
            umap[u]--;
            umap[v]++;
            
        }
        for(int i =1;i<=n;i++){
            if(umap[i] ==(n-1)){
                return i;
            }
        }
        return -1;
    }
};