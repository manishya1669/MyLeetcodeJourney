class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>v(n,1);
        
        for(int i=0;i<n;i++){
            for(int j =0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(v[i]<v[j]+1)
                       { v[i]=v[j]+1;}
                }
            }
        }
        int maxi = INT_MIN;
        for(auto x:v){
            maxi = max(x,maxi);
            
        }
        return maxi;
    }
}; 