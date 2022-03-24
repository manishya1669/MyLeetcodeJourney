// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        
        // string upper;
        // string lower;
        
        // for(int i =0;i<n;i++){
        //     if(isupper(str[i]))
        //          {upper.push_back(str[i]);}
            
        //     else
        //       { lower.push_back(str[i]);}
        // }
        
        // sort(upper.begin(),upper.end());
        // sort(lower.begin(),lower.end());
        
        // int i=0;
        // int j =0;
        // string res;
        // for(int i=0;i<n;i++){
        //     if(isupper(str[i]))
        //       {res.push_back(upper[i]);
        //       i++;}
               
        //     else
        //       {res.push_back(lower[j]);
        //       j++;}
        // }
        
        // return res;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // your code here
        string upper;
        string lower;
        
        for(int i = 0;i<n;i++){
            
            if(isupper(str[i])){
                upper.push_back(str[i]);
            }
            else{
                 lower.push_back(str[i]);
            }
           
        }
        sort(upper.begin(),upper.end());
        sort(lower.begin(),lower.end());
        
        int j  =0;
        int k =0;
        string res;
        
        for(int i =0;i<n;i++){
            
            if(isupper(str[i])){
                res.push_back(upper[j]);
                j++;
            }
            else{
                res.push_back(lower[k]);
                k++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends