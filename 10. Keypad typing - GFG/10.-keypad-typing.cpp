// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string arr, int n) 
{
    //code here
    string temp ="";
    for(int i = 0;i<n;i++){
        if(arr[i] == 'a' || arr[i] =='b' || arr[i] == 'c')  temp.insert(i,"2");
       else if(arr[i] == 'd' || arr[i] =='e' || arr[i] == 'f')  temp.insert(i,"3");
       else if(arr[i] == 'g' || arr[i] =='h' || arr[i] == 'i')  temp.insert(i,"4");
        
      else  if(arr[i] == 'j' || arr[i] =='k' || arr[i] == 'l')  temp.insert(i,"5");
     else   if(arr[i] == 'm' || arr[i] =='n' || arr[i] == 'o')   temp.insert(i,"6");
     else   if(arr[i] == 'p' || arr[i] =='q' || arr[i] == 'r'  || arr[i] == 's'  )   temp.insert(i,"7");
       else if( arr[i] =='t' || arr[i] == 'u' || arr[i] == 'v' )  temp.insert(i,"8");
     else   if( arr[i] =='w' || arr[i] == 'x' || arr[i] == 'y' || arr[i] == 'z' )   temp.insert(i,"9");

     
    }
    return temp;
}
