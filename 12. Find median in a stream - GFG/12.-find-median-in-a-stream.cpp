// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    vector<int> left, right;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        left.push_back(x);
        push_heap(left.begin(), left.end());
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        // make sure all elements in right heap are larger than left heap
        while(left.size() && right.size() && right[0]<left[0])
        {
            pop_heap(right.begin(), right.end(), greater<>());
            auto r = right.back();
            right.pop_back();
            
            pop_heap(left.begin(), left.end());
            auto l = left.back();
            left.pop_back();
            
            right.push_back(l);
            push_heap(right.begin(), right.end(), greater<>());
            left.push_back(r);
            push_heap(left.begin(), left.end());
        }
        // make sure left heap size is almost the same as right heap size
        while(left.size()>right.size()+1)
        {
            pop_heap(left.begin(), left.end());
            auto t = left.back();
            left.pop_back();
            right.push_back(t);
            push_heap(right.begin(), right.end(), greater<>());
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(left.size()>right.size())
            return left[0];
        else
            return (left[0]+right[0])/2;
    }
};

// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends