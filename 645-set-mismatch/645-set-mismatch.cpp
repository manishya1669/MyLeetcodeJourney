class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate =0;
        int missing =0;
        map<int,int>m;
        vector<int>v(2);
        
        for(int i=1;i<=nums.size();i++){
            m[i]++;
        }
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second ==3){
                v[0] = x.first;
                
            }
            if(x.second ==1){
                v[1] =x.first;
            }
        }
        return v;
    }
};