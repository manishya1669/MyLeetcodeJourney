class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v(nums);
        sort(v.begin(),v.end());
        int n = nums.size();
        int i =0,j=n-1;
       
        while(i<n && nums[i]==v[i]){
            i++;
        }
        while(j>=0 && nums[j]==v[j]){
            j--;
        }
        if(i==n)return 0;
        return abs(j-i)+1;
    }
};