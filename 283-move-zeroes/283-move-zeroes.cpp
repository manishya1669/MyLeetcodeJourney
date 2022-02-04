class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
       
        int i =0;
        int j =0;
        while(j<n){
            if(nums[j]==0)
                j++;
            else{
                int temp = nums[i];
                nums[i]= nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
        }
    }
};