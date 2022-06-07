class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size()<2)return 0;
        for(int i=1;i<nums.size();i++){
            int diff  = nums[i]- nums[i-1];
            maxi = max(maxi,diff);
        }
        return maxi;
    }
};