// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   
    bool isCycleUtil(int u, int par, vector<int> adj[], vector<bool>& vis) {
        vis[u] = true;

       
        for (auto v : adj[u]) {
            if (v == par) continue;

       
            if (vis[v]) return true;
            if (isCycleUtil(v, u, adj, vis)) return true;
        }
        return false;
    }

    
    bool isCycle(int V, vector<int> adj[]) {
       
        vector<bool> vis(V, false);

       
        for (int i = 0; i < V; i++) {
           
            if (!vis[i]) {
                bool f = isCycleUtil(i, -1, adj, vis);
                // if cycle is found, we return true.
                if (f) return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends