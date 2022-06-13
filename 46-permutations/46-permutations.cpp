class Solution {
public:
    
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>v;
       sort(nums.begin(),nums.end());
        
        vector<int>temp = nums;
        v.push_back(nums);
        next_permutation(nums.begin(),nums.end());
        while(temp !=nums){
            v.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return v;
    }
};