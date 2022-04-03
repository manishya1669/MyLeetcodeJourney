class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map<int,int> winner;
        map<int,int> loser;
        for(int i=0;i<matches.size();i++)
        {
            winner[matches[i][0]]++;
            loser[matches[i][1]]++;
        }
     vector<vector<int>> ans(2);
        for(auto i : winner)
        {
            if(i.second>0 && loser[i.first]==0)
                ans[0].push_back(i.first);
        }
        for(auto i:loser)
        {
            if(i.second==1)
                ans[1].push_back(i.first);
        }
        
        return ans;
    }
};