class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it:umap){
            if(it.second>=2)
                return it.first;
        }
        return 0;
    }
  
};