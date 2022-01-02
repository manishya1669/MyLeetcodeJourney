class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       int ans = 0;
        map<int, int> ma;
        
        for(auto &it : time){
            it %= 60;
            ans += it==0 ? ma[it] : ma[60-it];
            ma[it]++;
        }
        return ans; 
    }
};