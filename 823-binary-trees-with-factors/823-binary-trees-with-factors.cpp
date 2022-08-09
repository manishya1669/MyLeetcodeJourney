class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n = arr.size();
        long long mod = 1e9 + 7;
        
        sort(arr.begin(), arr.end());
        
        vector<int> dp(n, 1);
        unordered_map<int, int> mp;
        
       for(int i = 0; i < n; i++)
        {
            mp[arr[i]] = i;
        }
       
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                
                if(arr[i] % arr[j] == 0)
                {
                    if(mp.count(arr[i] / arr[j]))
                    {
                        int idx = mp[arr[i] / arr[j]];
                        dp[i] = (dp[i] % mod + (dp[j] % mod * dp[idx] % mod)) % mod;
                    }
                }
            }
        }
      
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            total = (total % mod + dp[i] % mod) % mod;
        }
        
        return total;
    }
};