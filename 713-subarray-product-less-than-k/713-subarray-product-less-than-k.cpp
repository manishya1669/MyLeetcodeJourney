class Solution {
public:
        
       int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0) return 0;
        int n=nums.size(),ans=0;
        int prod=1,left=0;
        for(int i=0;i<n;i++){
           prod*=nums[i];
           while(left<=i && prod>=k){
               prod = prod/nums[left];
               left++;
           }
            ans+=i-left+1;
        }
        return ans;
    
            
    }
};