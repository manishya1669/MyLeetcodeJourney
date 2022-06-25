class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<vector<int>>v;
        int minDiffere = INT_MAX;
        
        for(int i =0;i<n-1;i++){
            int x = arr[i];
            int y = arr[i+1];
            
            if(abs(x-y)<minDiffere){
                v.clear();
                v.push_back({x,y});
                minDiffere= abs(x-y);
            }else if(abs(x-y)==minDiffere){
                v.push_back({x,y});
            }
        }    
        return v;
    
        
    }
};