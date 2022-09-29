class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int, int>, vector<pair<int,  int>>, greater<pair<int, int>> > v;
        for(int i =0;i<arr.size();i++){
            v.push({abs(arr[i]-x) ,i});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            auto top=v.top();
             v.pop();
           ans.push_back(arr[top.second]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};