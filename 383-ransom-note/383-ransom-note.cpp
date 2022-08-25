class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>umap1,umap2;
        for(auto x:magazine){
            umap1[x]++;
        }
        for(auto x:ransomNote){
            umap2[x]++;
        }
       int count =0;
       for(int i =0;i<ransomNote.length();i++){
           if(umap1[ransomNote[i]] <umap2[ransomNote[i]]){
               return false;
           }
       }
        
      //  reucount==ransomNote?true:false;
       return true;
    }
};