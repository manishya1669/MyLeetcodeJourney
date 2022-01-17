// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int N, vector<int> adj[], int ans) 
	{
	    if(ans>=N){
        return -1;
    }
    vector<int> dist(N,1e9);
    queue<int>q;
    q.push(0);
    dist[0]=0;
    vector<bool> visi(N,false);
    visi[0]=true;
    while(!q.empty()){
        int nde=q.front();  
        q.pop();
        for(auto x: adj[nde]){
            if(visi[x]==false){
              dist[x]=dist[nde]+1;
              q.push(x);
              visi[x]=true;
        }
        }
    }
	
	 if(dist[ans]!=1e9){
        return dist[ans];
    }
    else{
        return -1;
    }
	}

};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends