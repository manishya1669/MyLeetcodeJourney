class Solution {
public:
    int diff(string s1,string s2){
        int count =0;
        for(int i=0;i<s1.length();i++){
            if(s1[i] !=s2[i])
                count++;
        }
        return count;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string> bfs;
        int count=0;
        bfs.push(start);
        while(!bfs.empty()){
            int size=bfs.size();
            for(int i=0; i<size; i++){
                string temp=bfs.front();
                bfs.pop();
                if(temp==end) return count;
                for(auto it=bank.begin(); it!=bank.end(); it++){
                    if(diff(temp, *it) == 1){
                        bfs.push(*it);
                        bank.erase(it);
                        it--;
                    }
                }
            }
            count++;
        }
        return -1;
    }
};