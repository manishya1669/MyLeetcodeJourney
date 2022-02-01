class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int zerocount = 0;
        int netprod = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 0) netprod *=nums[i];
            
            else{
                zerocount++;
                if(zerocount >1) return ans;
            }
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] ==0) ans[i] =netprod;
            else if(zerocount) ans[i] =0;
            else ans[i] = netprod/nums[i];
        }
       return ans;
    }
};