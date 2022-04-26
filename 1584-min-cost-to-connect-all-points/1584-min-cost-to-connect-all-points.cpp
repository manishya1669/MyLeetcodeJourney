class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        unordered_map<int,vector<pair<int,int>>> mp;
        
        for(int i=0;i<points.size()-1;i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                mp[i].push_back({dist,j});
                mp[j].push_back({dist,i});
            }
        }
        int ans=0;
        unordered_map<int,int> vstd;
        int sz=1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vstd[0]=1;
        vector<pair<int,int>> vp=mp[0];
        for(auto p:vp)
            pq.push(p);
        while(!pq.empty() and sz<points.size())
        {
            pair<int,int> p=pq.top();
            pq.pop();
            if(!vstd.count(p.second))
            {
                sz++;
                vstd[p.second]=1;
                ans+=p.first;
                vector<pair<int,int>> vpp=mp[p.second];
                for(auto pp:vpp)
                    if(!vstd.count(pp.second))
                        pq.push(pp);
            }
        }
        return ans;
        
    }
};