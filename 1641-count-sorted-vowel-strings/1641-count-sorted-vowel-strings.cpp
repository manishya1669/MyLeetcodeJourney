class Solution {
public:
    int countVowelStrings(int n) {
       
        vector<int>v(5,1);
        
        for(int i=1;i<=n;i++){
            for(int j =1;j<5;j++){
                v[j]=v[j]+ v[j-1];
            }
        }
        return v[4];
    }
};