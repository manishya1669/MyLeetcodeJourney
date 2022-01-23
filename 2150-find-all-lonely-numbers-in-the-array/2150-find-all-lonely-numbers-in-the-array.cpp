class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>res;
      unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it:nums){
            if(umap[it] ==1 && umap[it +1]==0 && umap[it-1] ==0)
                 res.push_back(it);
        }
        return res;
    }
};