class Solution {
    
public:
    string decodeMessage(string key, string mes) {
       unordered_map<char,char>mp;// make a substitution table
        int cnt=0;
        for(int i=0;i<key.size();i++){
            if(key[i]!=' ' && mp.find(key[i])==mp.end()){
            mp[key[i]]='a'+cnt;//enter in a substitution table
                cnt++;
            }
        }
        string ans;
        for(int i=0;i<mes.size();i++){
            if(mes[i]==' '){
                ans+=mes[i];
            }
            else{
                ans+=mp[mes[i]];
            }
        }
        return ans;
    }
};