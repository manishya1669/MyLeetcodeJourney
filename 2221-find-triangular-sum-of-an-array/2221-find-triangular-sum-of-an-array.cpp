class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while(n!= 1){
            for(int i =0,j=1;i<n-1;i++){
                nums[i]= (nums[i] + nums[j])%10;
                j++;
            }
            n--;
        }
        int x = nums[0];
        return x; 
    }
};