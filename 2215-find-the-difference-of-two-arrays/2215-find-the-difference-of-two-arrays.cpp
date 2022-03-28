class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
       vector<int> v1,v2;
        unordered_map<int,int> m1,m2;
        for(auto i: nums1) m1[i]++;
        for(auto i: nums2) m1[i]=0;
        for(auto i:m1){
            if(i.second>=1) v1.push_back(i.first);
        }
        for(auto i: nums2) m2[i]++;
        for(auto i: nums1) m2[i]=0;
        for(auto i:m2){
            if(i.second>=1) v2.push_back(i.first);
        }
        return {v1,v2};
    }
};