// { Driver Code Starts
//Initial Template for C++

// C++ program for implementation of KMP pattern searching 
// algorithm 
#include <bits/stdc++.h> 

using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, int* lps) 
{ 
	//length of the previous longest prefix suffix.
	int len = 0; 
    
    // lps[0] is always 0.
	lps[0] = 0;  

	int i = 1; 
	//the loop calculates lps[i] for i = 1 to M-1.
	while (i < M) 
	{ 
		if (pat[i] == pat[len]) { 
			len++; 
			lps[i] = len; 
			i++; 
		} 
		else 
		{ 
			//This is tricky. Consider the example AAACAAAA and i = 7. 
			//The idea is similar to search step. 
			if (len != 0) { 
				len = lps[len - 1];
				//also, note that we do not increment i here. 
			} 
			else 
			{ 
				lps[i] = 0; 
				i++; 
			} 
		} 
	} 
} 

//Function to check if the pattern exists in the string or not.
bool KMPSearch(string pat, string txt) 
{ 
	int M = pat.length(); 
	int N = txt.length(); 

	//creating lps[] that will hold the longest prefix suffix values for pattern. 
	int lps[M]; 

	//calculating lps[] array.
	computeLPSArray(pat, M, lps); 

	int i = 0; // index for txt[] 
	int j = 0; // index for pat[] 
	while (i < N) 
	{ 
		if (pat[j] == txt[i]) { 
			j++; 
			i++; 
		} 
		
        //if pattern is found, we return true.
		if (j == M) { 
			return true; 
			j = lps[j - 1]; 
		} 
		//else if there is mismatch after j matches.
		else if (i < N && pat[j] != txt[i]) 
		{ 
			//we do not match lps[0..lps[j-1]] characters,
			//they will match anyway.
			if (j != 0) 
				j = lps[j - 1]; 
			else
				i = i + 1; 
		} 
	}
	//returning false if pattern is not found.
	return false;
} 


// { Driver Code Starts.

// Driver program to test above function 
int main() 
{ 
    int t;
    std::cin >> t;
    
    while(t--){
        string s, pat;
        cin >> s >> pat;
        if(KMPSearch(pat, s)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
	return 0;
} 
  // } Driver Code Ends