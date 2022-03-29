class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        unordered_map<int,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        for(auto x:umap){
            if(x.second>=2)
                return x.first;
        }
        return 0;
    }
  
};
 