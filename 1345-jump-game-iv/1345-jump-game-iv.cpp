class Solution {
public:
    int minJumps(vector<int>& arr) {
    unordered_map<int, vector<int>> indices;
    for(int i = 0; i < arr.size(); i++) indices[arr[i]].emplace_back(i);

    queue<int> q;
    q.push(0);
    vector<int> dist(arr.size());

    while(!q.empty()) {
        int temp = q.front(); q.pop();
        if(temp == arr.size() - 1) return dist[temp];   
		
        vector<int>& list = indices[arr[temp]];
        list.emplace_back(temp - 1), list.emplace_back(temp + 1);
		
        for(const auto &i: list) {
            if(i > 0 && i < arr.size() && !dist[i]) {
                dist[i] = 1 + dist[temp];
                q.push(i);
            }
        }
        list.clear();
    }
    return -1;
}
};