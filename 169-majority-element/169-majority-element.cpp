class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
       
        for(int it:nums){
            umap[it]++;
        }
        for(auto it:umap){
            if(it.second > nums.size()/2)
                return it.first;
        }
        return 0;
    }
};
