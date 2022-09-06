class Solution {
public:
    bool DFS(int source,vector<bool>&visited,vector<bool>&currvisited,vector<vector<int>>&graph,vector<bool>&find){
         visited[source]=true;
         currvisited[source]=true;
         vector<int>temp = graph[source];
         for(auto x:temp){
             if(visited[x]==false){
                 if(DFS(x,visited,currvisited,graph,find)){
                     return  find[source]=true;
                 }
             }
             else if(visited[x] && currvisited[x]){
                 return find[source]= true;
             }
         }
        currvisited[source]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool>visited(n,false),currvisited(n,false);
        vector<bool>find(n,false);
        vector<int>v;
        for(int i =0;i<n;i++){
            if(visited[i]==false){
                DFS(i,visited,currvisited,graph,find);
            }
        }
        for(int i =0;i<n;i++){
            if(!find[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};