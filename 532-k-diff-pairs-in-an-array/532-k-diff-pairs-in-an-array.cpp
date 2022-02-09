class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int counts =0;
        unordered_map<int,int>umap;

        for(int i =0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        if(k==0){
            for(auto it:umap){
                if(it.second>1)
                    counts++;
            }
            return counts;
        }
       
        for(auto it:umap){
            if(umap.count(it.first - k))
                counts++;
        }
            
        
            return counts;
            
    }
};