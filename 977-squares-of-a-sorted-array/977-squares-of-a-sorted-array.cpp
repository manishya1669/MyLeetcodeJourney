class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>p;
        int n = nums.size();
        vector<int>v;
        for(auto x:nums){
            p.push(x*x);
        }
        while(!p.empty()){
           v.push_back(p.top());
            p.pop();
        }
        return v;
    }
};