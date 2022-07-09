// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
 static bool  com(vector<int>&a, vector<int>&b){
    return a[1]<b[1];
}
int maxChainLen(struct val p[],int n)
{
 
 vector<vector<int>>v;
 
 for(int i=0;i<n;i++){
     v.push_back({p[i].first,p[i].second});
     
 }
 
  sort(v.begin(),v.end(),com);
  
   vector<int>lis(n,1);
  for(int i =1;i<n;i++)
     for(int j=0;j<i;j++){
          if(v[j][1] <v[i][0] && lis[i]<lis[j]+1){
              lis[i]= lis[j]+1;
             
         }
     }
     
 
 int maxi = INT_MIN;
 for(int i =0;i<n;i++){
     maxi = max(lis[i],maxi);
 }
  return maxi;
}