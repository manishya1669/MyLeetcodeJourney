class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>forward(n),backward(n);
        int currMax = nums[0];
        for(int i=0;i<n;i++){
            currMax = max(currMax,nums[i]);
            forward[i]=currMax;
        }
        currMax= nums[n-1];
        for(int i=n-1;i>=0;i--){
            currMax= min(currMax,nums[i]);
            backward[i]=currMax;
        }
        int sum = 0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>forward[i-1] && nums[i]<backward[i+1]){sum+=2;}
            else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]){sum++;}
        }
        return sum;
    }
};