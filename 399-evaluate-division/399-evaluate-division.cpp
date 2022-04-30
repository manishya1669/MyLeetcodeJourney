class Solution {
public:
  vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        vector< vector<double> > graph (41, vector<double> (41, -1));
        vector<double> result;
        
        map<string, int> mp;
        
        // map string nodes to integer
        int counter = 1;
        for(int i=0;i<values.size();i++){
            if(!mp[equations[i][0]]){
                mp[equations[i][0]] = counter++;
            }
            if(!mp[equations[i][1]]){
                mp[equations[i][1]] = counter++;
            }
        }
        
        // create graph
        for(int i=0;i<values.size();i++){
            graph[ mp[ equations[i][0] ] ][ mp[ equations[i][1] ] ] =  values[i];
            graph[ mp[ equations[i][1] ] ][ mp[ equations[i][0] ] ] =  
                (double)( 1.0 / values[i]);
        }
        
        //flyod warshall
        for(int k=0;k<counter;k++){
            for(int i=0;i<counter;i++){
                for(int j=0;j<counter;j++){
                    if(graph[i][k]!=-1 && graph[k][j]!=-1 && graph[i][j]==-1){
                        graph[i][j] = graph[i][k] * graph[k][j];
                    }
                }
            }
        }
        
        for(int i=0;i<queries.size();i++){
            int x = mp[queries[i][0]];
            int y = mp[queries[i][1]];
            result.push_back(graph[x][y]);
        }
        
        return result;
    }
};