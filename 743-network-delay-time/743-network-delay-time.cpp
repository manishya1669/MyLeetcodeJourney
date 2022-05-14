class Solution {
public:
  int networkDelayTime(vector<vector<int>>& times, int n, int k) 
{
    vector<pair<int,int>> adj[n+1];
    
    for(int i=0;i<times.size();i++)
    {
        adj[times[i][0]].push_back({times[i][1],times[i][2]});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> distto(n+1,INT_MAX);
    
    distto[k]=0;
    pq.push({0,k});
    
    while(!pq.empty())
    {
        int dist=pq.top().first;
        int prev=pq.top().second;
        pq.pop();
        
        vector<pair<int,int>> ::iterator it;
        for(it=adj[prev].begin();it!=adj[prev].end();it++)
        {
            int next=it->first;
            int distnext=it->second;
            
            if(distto[next]>dist+distnext)
            {
                distto[next]=dist+distnext;
                pq.push({distto[next],next});
            }
        }
    }
    int ans=0;
    for(int i=1;i<distto.size();i++)
        ans=max(ans,distto[i]);
    
    if(ans==INT_MAX)
        return -1;
    return ans;
}
};