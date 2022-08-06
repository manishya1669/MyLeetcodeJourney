class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int>numap;
        vector<int>v;
        for(auto x:nums1){
            numap[x]++;
        }
        
        for(auto x:nums2){
            
            if(numap[x]){
                v.push_back(x);
                numap[x]--;
            }
        }
        return v;
        
    }
};