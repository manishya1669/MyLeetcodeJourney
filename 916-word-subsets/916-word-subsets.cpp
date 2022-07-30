class Solution {
public:
   vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        unordered_map<char,int> w2;
        for(int i=0;i<words2.size();i++)
        {
            unordered_map<char,int> word;
            for(char c:words2[i])
            {
                word[c]++;
            }
            for(auto it:word)
            {
                if(w2[it.first]<it.second)
                    w2[it.first]=it.second;
            }
        }
        for(int i=0;i<words1.size();i++)
        {
            unordered_map<char,int> w1;
            for(char c:words1[i])
            {
                w1[c]++;
            }
            int f=1;
            for(auto it:w2)
            {
                if(w1[it.first]<it.second)
                {
                    f=0;
                    break;
                }
            }
            if(f)
                ans.push_back(words1[i]);
        }
        return ans;
    }
};