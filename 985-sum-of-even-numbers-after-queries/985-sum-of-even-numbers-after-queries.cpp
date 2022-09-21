class Solution {
public:
    int sum(vector<int>&v){
        int n = v.size();
        int sum=0;
        for(int i =0;i<v.size();i++){
            if(v[i]%2==0){
                sum+=v[i];
            }
        }
        return sum;
    }
   vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum = 0;
        for(auto val:nums){
            if(val%2 == 0) sum+=val;
        }
        for(auto q:queries){
            int old = nums[q[1]];
            int now = nums[q[1]] + q[0];
            if(old%2 == 0){
                sum-=old;
            }
            if(now%2 == 0){
                sum+=now;
            }
            ans.push_back(sum);
            nums[q[1]] += q[0];
        }
        return ans;
    }
};