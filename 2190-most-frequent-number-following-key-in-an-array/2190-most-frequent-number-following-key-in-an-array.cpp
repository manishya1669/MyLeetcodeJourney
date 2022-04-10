class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
            unordered_map<int,int>umap;
      for(int i =0;i<nums.size()-1;i++){
          if(key == nums[i]){
               umap[nums[i+1]]++;
          }
      }
        
        int maxi = 0;
        int ans =0;
        for(auto x:umap){
            if(maxi<x.second){
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};