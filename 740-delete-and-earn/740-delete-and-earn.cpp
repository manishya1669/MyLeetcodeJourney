class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
     map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int prevNum=-1, prevMax=0,prev2Max=0,currMax;
        for(auto it=m.begin();it!=m.end();it++)
        {   
            if(prevNum==-1)
            {   
                currMax=it->first*it->second;
                prevMax=currMax;
                prevNum=it->first;
                continue;
            }
            if(it->first-prevNum>1)
            {
                currMax=prevMax+it->first*it->second;
            }
            else
            {
                currMax=max(prevMax, prev2Max+it->first*it->second);
            }
            prev2Max=prevMax;
            prevMax=currMax;
            prevNum=it->first;
        }
        return currMax   ;
    }
};