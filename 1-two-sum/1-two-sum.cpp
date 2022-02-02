class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>umap;
        int val ;
        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            val = nums[i];
            if(umap.count(target - nums[i])){
                v.push_back(umap[target -nums[i]]);
                v.push_back(i);
                return v;
            }else{
                umap[nums[i]]=i;
            }
        }
        return v;
    }
};