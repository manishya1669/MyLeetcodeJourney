class Solution {
public:
    string getSmallestString(int n, int k) {
        
        vector<int>v(n,1);
        int i=n-1;
        k-=n;
        
        while(k>0){
            if(k>25)
               { v[i]=26;i--;
                k-=25;}
            
             else{
                 v[i]=k+1;
                 k-=k;
              }
        }
        //Now converting it into character
        string ans;
        for(int i=0;i<v.size();i++){
            ans +=char(v[i] + 96);
        }
        
        return ans;
    }
};