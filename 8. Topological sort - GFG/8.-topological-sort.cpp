// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
vector<int>result;

void kahn(int V, vector<int> adj[], vector<int> degree){
    queue<int>q;
    for(int i=0;i<V;i++){
        if(degree[i]==0){
            q.push(i);
        }
    }
    
    while(!q.empty()){
        int curr=q.front();
        result.push_back(curr);
        q.pop();
        
        for(int child:adj[curr]){
            degree[child]--;
            if(degree[child]==0){
                q.push(child);
            }
        }
    }
}

vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int> degree(V+1,0);
    for(int i=0;i<V;i++){
        for(int child:adj[i]){
            degree[child]++;
        }
    }
    kahn(V,adj,degree);
    return result;
}


};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends