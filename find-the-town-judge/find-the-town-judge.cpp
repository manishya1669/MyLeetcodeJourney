class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
     
       map<int,int>  first;
        if(n==1)return 1;
       map<int,int>second;
        
        for(int i = 0;i<trust.size();i++)
            first[trust[i][0]]++;
        
        for(int i = 0;i<trust.size();i++)
            second[trust[i][1]]++;
        
        for(int i= 1;i<=n;i++)
            if(first[i]==0 && second[i]==n-1)
                return i;
        
        return -1;
    }
    
};