class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int maxi=INT_MAX ;    
        for(auto it:nums){
            if(abs(maxi) == abs(it)){
                maxi = max(maxi,(it));
            }else if(abs(it)<abs(maxi)){
                maxi = (it);
            }
        }
        return maxi;
    }
};