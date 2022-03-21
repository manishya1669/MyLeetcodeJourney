class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i] -'a']=i;
        }
        vector<int>ans;
        int end =0;
        int start =0;
        for(int i=0;i<s.length();i++){
            end = max(end,v[s[i]-'a']);
            if(i==end)
                    {ans.push_back(i- start+1);
                    start = i +1;}
        }
        return ans;
    }
};