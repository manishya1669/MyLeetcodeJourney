class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       
        map<int,int>umap;
        
        for(int i= 0;i<nums.size();i++){
            for(int j =0;j<nums[i].size();j++){
                umap[nums[i][j]]++;
            }
        }
         vector<int>v;
        for(auto x:umap){
            if(x.second == nums.size()){
                v.push_back(x.first);
            }
        }
        return v;
        
        
    }
};