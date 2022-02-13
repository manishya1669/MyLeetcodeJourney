class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res={{}};
        if(nums.empty())return res;
        
        for(auto x:nums){
            int n = res.size();
            for(int i=0;i<n;i++){
                vector<int>r=res[i];
                r.push_back(x);
                res.push_back(r);
            }
        }
        return res;
    }
};