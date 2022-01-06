class Solution {
       public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        unordered_map<int,int>mp;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<trips.size();i++){
            mp[trips[i][1]]+=trips[i][0];
            mp[trips[i][2]]+=-trips[i][0];
            maxi=max(maxi,trips[i][2]);
            mini=min(mini,trips[i][1]);
        }
        int sum=0;
        for(int i=mini;i<=maxi;i++){
            sum+=mp[i];
            if(sum>capacity)
                return false;
        }
        return sum<capacity;
    }
};