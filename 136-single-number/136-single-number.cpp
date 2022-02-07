class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>umap;
        for(auto i:nums){
            umap[i]++;
        }
        for(auto m:umap){
            if(m.second ==1)
                return m.first;
        }
        return 0;
    }
};