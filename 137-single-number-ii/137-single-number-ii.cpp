class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int>maps;
        for(auto it:nums){
            maps[it]++;
        }
        for(auto it:maps){
            if(it.second ==1)
                return it.first;
        }
        return 0;
    }
};