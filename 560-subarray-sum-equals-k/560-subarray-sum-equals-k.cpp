class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        int currSum =0;
        int i =0;
        int count=0;
        
        while(i<nums.size()){
            currSum+=nums[i];
            
            if(currSum==k)
                count++;
                
            if(umap.find(currSum-k) !=umap.end())
                count+=umap[currSum-k] ;
            
            umap[currSum]++;
            i+=1;
            
        }
        return count;
    }
};