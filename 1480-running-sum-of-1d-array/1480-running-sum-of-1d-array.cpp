class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>v;
        v.push_back(nums[0]);
        
        for(int i =1;i<nums.size();i++){
            int sum = nums[i]+v[i-1];
            v.push_back(sum);
        }
        return v;
    }
};