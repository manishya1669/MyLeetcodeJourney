class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        set<int>s(nums1.begin(),nums1.end());
        
        for(auto x:nums2){
            if(s.erase(x)){
                v.push_back(x);
            }
        }
        return v;
        
        
        
        
        
    }
};