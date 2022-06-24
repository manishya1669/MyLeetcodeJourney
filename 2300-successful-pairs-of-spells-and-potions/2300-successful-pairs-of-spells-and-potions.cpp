class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
      int sn = spells.size();
        int pn = potions.size();
        vector<int> ans; 
        
        sort(potions.begin(), potions.end()); 
        
        for(auto it : spells)
        {
            int left=0, right=pn-1, mid; 
            while(left<=right) 
            {
                mid = (left+right)/2; 
                
                if((long long)it*potions[mid] >= success) right=mid-1;
                
                else left=mid+1;
            }
            ans.push_back(pn-left);
        }
        return ans;
    }
};