// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
     void DFSUtil(int i , vector<int>adj[],int V, bool vis[],vector<int>&res){
         if(vis[i] == true)return;
         
         vis[i]= true;
         res.push_back(i);
         
         for(int x:adj[i]){
             if(!vis[x]){
                 DFSUtil(x,adj,V,vis,res);
             }
         }
         
     }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int>res;
      bool vis[V];
      memset(vis,false,sizeof(vis));
      
      for(int i = 0;i<V;i++){
          if(!vis[i]){
              DFSUtil(i,adj,V,vis,res);
          }
      }
      return res;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends