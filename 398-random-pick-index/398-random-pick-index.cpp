class Solution {
public:
    unordered_map<int,vector<int>>umap;
    Solution(vector<int>& nums) {
        
        
       for(int i =0;i<nums.size();i++){
           umap[nums[i]].push_back(i);
       }
    }
    
    int pick(int target) {
       int ans =0;
        
        int si= umap[target].size();
        int ran= umap[target][rand()%si];
        return ran;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */