class Solution {
public:
    int countHighestScoreNodes(vector<int>& par) {
        long long int n = par.size();
        vector<long long int> adj[n];
        for(long long int i=1;i<par.size();i++)
        {
            adj[par[i]].push_back(i);
        }
        vector<long long int>dp(n,0);
        map<long long int,long long int>mp;
        dfs(adj,0,-1,dp);
        long long int ans = -1;
        for(long long int i=0;i<n;i++)
        {
            long long int left , right , rem;
            if(adj[i].size()==0)
            {
                left = 1;
                right = 1;
                rem = n-1;
            }
            if(adj[i].size()==1)
            {
                left = dp[adj[i][0]];
                right = 1;
                rem = n-1-left;
                if(rem==0)
                    rem=1;
            }
            
            if(adj[i].size()==2)
            {
                 left = dp[adj[i][0]];
                 right = dp[adj[i][1]];
                 rem = n-1-left-right;
                 if(rem==0)
                     rem=1;
            }
            // cout<<left*right*rem<<" ";
            mp[left*right*rem]++;
        }
        return mp.rbegin()->second;
    }
    
    void dfs(vector<long long int>adj[] ,long long int src , long long int par , vector<long long int>&dp )
    {
        dp[src]=1;
        for(auto xt : adj[src])
        {
            if(xt!=par)
            {
                dfs(adj,xt,src,dp);
                dp[src]+=dp[xt];
            }
        }
    }
};