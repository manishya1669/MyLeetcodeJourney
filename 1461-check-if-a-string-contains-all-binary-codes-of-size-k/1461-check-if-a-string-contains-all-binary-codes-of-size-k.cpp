class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.length())return false;
        unordered_map<string,int>umap;
        int count=0;
        for(int i =0;i<s.length() -k+1;i++){
            
            string temp = s.substr(i,k);
            if(umap[temp] ==0){
            umap[temp]++;
                count++;
            }
            
        }
        return count== pow(2,k);
    }
};