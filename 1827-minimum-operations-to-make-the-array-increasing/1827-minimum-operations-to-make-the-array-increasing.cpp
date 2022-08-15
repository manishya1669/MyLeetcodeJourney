class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)return 0;
        int  count =0;
        for(int i =1;i<n;i++){
            if(nums[i-1]<nums[i]){
                continue;
            }else{
                count += abs(nums[i] - nums[i-1]) +1;
                nums[i]+= abs(nums[i]- nums[i-1])+1;
            }
        }
        return count;
    }
};