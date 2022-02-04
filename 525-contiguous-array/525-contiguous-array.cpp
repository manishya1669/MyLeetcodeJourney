class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>umap;
        int count =0;
        int longest_subA=0;
        for(int i=0;i<n;i++){
            count +=nums[i]==1?1:-1;
            if(count ==0){
                if(longest_subA<i+1)
                    longest_subA=i+1;
            }
            else if(umap.find(count) !=umap.end()){
                if(longest_subA <i - umap[count])
                    longest_subA= i-umap[count];
            }
            else{
                umap[count]=i;
            }
            
        }
        return longest_subA;
    }
};