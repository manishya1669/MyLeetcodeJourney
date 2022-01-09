class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i = 0;i<nums.size();i++){
            int val = target - nums[i];
            if(m[val] != 0)
                return {m[val] -1,i};
            m[nums[i]] = i+1;
        }
        return {-1,-1};
        
    }
};