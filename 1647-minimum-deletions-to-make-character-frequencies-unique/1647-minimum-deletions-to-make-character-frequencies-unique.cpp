class Solution {
public:
    int minDeletions(string s) {
        
      unordered_map<char,int>ump;
        for(int i=0;i<s.size();i++) ump[s[i]]++;
        priority_queue<int>pq;
        for(auto x:ump){
            pq.push(x.second);
        }
        int count=0;
        while(!pq.empty()){
            int top=pq.top();
            pq.pop();
            if(pq.empty()) return count;
            if(pq.top()==top){
             count++;
                if(top>1) pq.push(top-1);
            }
        }
        return count;
    }
};
