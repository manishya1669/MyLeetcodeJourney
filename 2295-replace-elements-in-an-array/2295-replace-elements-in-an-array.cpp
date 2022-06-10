class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& ope) {
        map<int,int>omap;
        
        for(int i =0;i<nums.size();i++)
            omap[nums[i]] = i;
        
        
        for(auto x:ope){
            int val = omap[x[0]];
            nums[val]=x[1];
            omap[x[1]] = val;
        }
        return nums;
    }
};