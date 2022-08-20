class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int curPos = startFuel;
        int ans = 0,count = 0;
        priority_queue<int> pq;
        while(1){
            while(count<stations.size() and stations[count][0]<=curPos){
                pq.push(stations[count][1]);
                count++;
            }
            if(curPos>=target) return ans;
            if(pq.empty())return -1;
            curPos+=pq.top();
            pq.pop();
            ans++;
        }
        return -1;
    }
};