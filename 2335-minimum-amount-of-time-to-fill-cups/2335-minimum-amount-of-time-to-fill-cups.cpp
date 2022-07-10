class Solution {
public:
    int fillCups(vector<int>& amount) {
        
     int maxi =0,sum =0;
        for(auto x:amount){
            maxi=max(maxi ,x);
            sum+=x;
        }
        return max(maxi,(sum+1)/2);
    }
};