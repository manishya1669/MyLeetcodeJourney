class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        int n = size(nums);
        
        while(nums.size() >1){
             vector<int>v; 
            for(int  i =0;i<nums.size()/2;i++){
                v.push_back( (i%2==1)? max(nums[2*i] , nums[2*i +1]) : min(nums[2*i] ,nums[2*i+1]));
            }
            nums = v;
        }
        return nums[0];
    }
};