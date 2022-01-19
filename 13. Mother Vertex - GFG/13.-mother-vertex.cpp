// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
     void DFS(vector<int> adj[], int u, vector<bool> &vis)
   {
      vis[u] = true;
      
      for(int v : adj[u])
      {
          if(!vis[v])
             DFS(adj, v, vis);
      }
   }
   
int findMotherVertex(int V, vector<int>adj[])
{
    vector<bool> vis(V, false);
    int last_dfs;
    
    for(int i = 0; i < V; i++)
    {
        if(!vis[i])
        {
            DFS(adj, i, vis);
            last_dfs = i;
        }
    }
    
    fill(vis.begin(), vis.end(), false);
    
    DFS(adj, last_dfs, vis);
    
    for(int i = 0; i < V; i++)
    {
        if(!vis[i])
           return -1;
    }
   return last_dfs;
}
 

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends