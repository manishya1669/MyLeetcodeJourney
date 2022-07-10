class Solution {
public:
    int maxi(vector<int>&v, int length){
      
        int n = v.size();
        sort(v.begin(),v.end());
          int maximum = v[0];
        for(int i =1;i<n;i++){
            maximum = max(maximum,v[i]-v[i-1]);
        }
        maximum = max(maximum, length - v.back());
        
        return maximum;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int mod = 1e9 +7;
        long long ans = (long)maxi(horizontalCuts,h)% 1000000007;
       //  cout<<"ans:"<<ans;
        long long ma = (long)maxi(verticalCuts,w)% 1000000007;
      //  cout<<"ma"<<ma;
        
        return ans * ma%1000000007;
        
    }
};