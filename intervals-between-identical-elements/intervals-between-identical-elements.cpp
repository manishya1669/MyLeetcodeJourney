class Solution {
public:
  
    vector<long long> getDistances(vector<int>& arr) {
        unordered_map<int,pair<int,long long>> m;
        vector<long long> res(arr.size(),0);
        for(int i = arr.size() -1; i>=0; i--) {
            m[arr[i]].second += i+1;
            m[arr[i]].first++;
            res[i] = (m[arr[i]].second - (long long)(i+1) * (m[arr[i]].first)); 
        }
        
        m.clear();
        for(int i = 0; i < arr.size() ; i++) {
            m[arr[i]].second += i+1;
            m[arr[i]].first++;

            res[i] += abs(m[arr[i]].second - (long long)(i+1) * (m[arr[i]].first)); 
        }
        
        return res;
        
    }
};