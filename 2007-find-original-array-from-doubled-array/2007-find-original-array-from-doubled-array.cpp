class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        vector<int>ans,empt;
        int n = changed.size();
        if(n%2 !=0)return ans;
         sort(changed.begin(),changed.end());
        
        map<int,int>umap;
        for(auto x:changed){
            umap[x]++;
        }
        int count =0;
        for(int i =0;i<n;i++){
            if(umap[changed[i]]==0)continue;
            else if(umap[changed[i]*2]==0)return empt;
            
            else{
                ans.push_back(changed[i]);
            umap[changed[i]]--;
            umap[changed[i]*2]--;
            cout<<changed[i]<<endl;
            }
            
        }
        return ans;
       
        
    }
};