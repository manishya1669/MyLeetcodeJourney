class Solution {
public:
        int removeDuplicates(vector<int>& nums) {
        int count = 0;
        map<int,int> mp;
        int  j = 0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0){
                mp[nums[i]] = 1;
                count++;
                nums[j++] = nums[i];
            }
        }
        return count;
    }

};