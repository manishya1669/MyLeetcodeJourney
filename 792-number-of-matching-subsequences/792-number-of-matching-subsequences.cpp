class Solution {
public:
    unordered_map<string,int> count;
    bool issubseq(string word, string s){
        int j=0; int i=0;
        while(i<s.size() && j<word.size()){
            if(s[i]==word[j]){
                i++; j++; 
            }
            else i++;
        }
        return j==word.size();
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int c=0;
        for(auto &word:words) count[word]++;
        
        for(auto it=count.begin();it!=count.end();it++){
            if(issubseq(it->first,s))
                c+=it->second;
        }
        return c;
    }
};