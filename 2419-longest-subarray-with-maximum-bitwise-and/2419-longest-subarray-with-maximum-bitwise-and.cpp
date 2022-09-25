class Solution {
public:
   
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        int maxi= INT_MIN;
        for(auto x:nums){
            maxi = max(x,maxi);
            
        }
        int ans=0;
        int count=0;
        for(auto x:nums){
            if(maxi ==x){
                count++;
            }else{
               
                count=0;
            }
             ans= max(count,ans);
        }
        return ans;
        
        
    }
};