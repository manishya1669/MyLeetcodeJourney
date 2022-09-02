class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        
        unordered_set<int> s(arr.begin(), arr.end());
        int i, j, a, b, c, count, ans = 0, n = arr.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                a = arr[i];
                b = arr[j];
                count = 2;
                while(s.find(c = a + b) != s.end()) 
                {
                    count += 1;
                    ans = max(ans, count);
                    a = b;
                    b = c;
                }
            }
        }
        return ans;
    }
};