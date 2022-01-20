// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
    void dfs(int node,stack<int> &st,vector<int> &vis,vector<int> adj[])
{
    vis[node]=1;
       for(auto i : adj[node])
       {
           if(!vis[i])
           {
               dfs(i,st,vis,adj);
           }
       }
       st.push(node);
}

void revdfs(int node,vector<int> &vis,vector<int> transpose[])
{
    vis[node]=1;
    for(auto i:transpose[node])
    {
        if(!vis[i])
        {
            revdfs(i,vis,transpose);
        }
    }
}

   int kosaraju(int V, vector<int> adj[])
   {
       vector<int> vis(V,0);        
       stack<int> st;
       for(int i=0;i<V;i++)
       {
           if(!vis[i])
           {
               dfs(i,st,vis,adj);
           }
       }
       
       vector<int> transpose[V];
       for(int i=0;i<V;i++)
       {
           vis[i]=0;
           for(auto it:adj[i]) // from i to it
           {
               transpose[it].push_back(i);  // make it it to i
           }
       }
              int SCC=0;
       while(!st.empty())
       {
           int node = st.top();
           st.pop();
           
           if(!vis[node])
           {
               revdfs(node,vis,transpose);
               SCC++;                     // increase the number of components just before 
           }                              // calling the revdfs for next node
       }
       return SCC;
   }
};
// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends