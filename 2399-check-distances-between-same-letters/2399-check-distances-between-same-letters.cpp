class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n= s.length();
        map<char,int>umap;
       
        for(int i =0;i<n;i++){
            if(umap[s[i]]==0){
                umap[s[i]]=i+1;
            }else{
                if(distance[s[i]-'a'] != (i-umap[s[i]])){
                    return false;
                }
            }
        }
        return true;
        
 
    }
};