class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        set<int>s;
        
        for(int i =0;i<n;i++){
            if(nums[i] != key)continue;
            
            for(int j=0;j<n;j++){
                if(abs(i-j) <=k && nums[i] ==key){
                    s.insert(j);
                }
            }
        }
        return vector<int>(s.begin(),s.end());
       
    }
};