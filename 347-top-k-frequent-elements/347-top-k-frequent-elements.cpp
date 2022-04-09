class Solution {
public:
      vector<int> topKFrequent(vector<int>& nums, int k) 
    {
          unordered_map<int,int>umap;
          for(auto x:nums){
              umap[x]++;
          }
       
          vector<pair<int,int>>v;
          for(auto x:umap){
              v.push_back(make_pair(x.second,x.first));
          }
          sort(v.begin(),v.end(),greater<>());
          vector<int>ans;
          for(int i=0;i<k;i++){
              ans.push_back(v[i].second);
          }
          return ans;
      }
};