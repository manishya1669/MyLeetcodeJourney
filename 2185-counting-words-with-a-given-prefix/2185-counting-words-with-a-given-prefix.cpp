class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int n = words.size();
        int m = pref.length();
        int co = 0;
        
            for(int j =0;j<n;j++){
                int count =0;
                for(int i=m-1;i>=0;i--){
                   if( words[j].size()<m || pref[i] != words[j][i])
                       break;
                    else
                        count++;
                        
                }
                if(count == m)
                    co++;
            }
        return co;
    }
};