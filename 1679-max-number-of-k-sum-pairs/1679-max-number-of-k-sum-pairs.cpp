class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
     
       unordered_map<int, int> freqMap;
        int ans = 0;
        for(int x : nums) {
            int target = k - x;
            if(freqMap.find(target) != freqMap.end()) {
                freqMap[target]--;
                if(freqMap[target] == 0) freqMap.erase(target);
                ans++;
            } else {
                freqMap[x]++;
            }
        }
        return ans;
    }
};