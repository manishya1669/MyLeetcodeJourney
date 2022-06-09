class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int n= nums.size();
        for(auto x:nums)
            umap[x]++;
        vector<int>v;
        for(auto x:umap){
            if(x.second >n/3)
                v.push_back(x.first);
        }
        return v;
    }
};