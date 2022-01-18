// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
     void shape(vector<vector<char>>& grid, int i,int j, vector<vector<int>>&visited,int n,int m)
   {
       if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!='X')
       return;
       if(!visited[i][j])
       {
           visited[i][j]=1;
           shape(grid,i,j+1,visited,n,m);
           shape(grid,i,j-1,visited,n,m);
           shape(grid,i+1,j,visited,n,m);
           shape(grid,i-1,j,visited,n,m);
       }
   }
    int xShape(vector<vector<char>>& grid) 
    {
        
        int result =0;
       int n = grid.size();
       int  m= grid[0].size();
       vector<vector<int>>visited(n,vector<int>(m,0));
       
       
       for(int i = 0;i<n;i++){
           for(int j =0;j<m;j++){
               if(grid[i][j]=='X' && visited[i][j]==0)
                  result++;
                  shape(grid,i,j,visited,n,m);
           }
       }
       return result;
    }
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends