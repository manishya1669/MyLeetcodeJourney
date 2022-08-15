class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>umap;
        umap.insert({'I',1});
        umap.insert({'V',5});
        umap.insert({'X',10});
        umap.insert({'L',50});
        umap.insert({'C',100});
        umap.insert({'D',500});
        umap.insert({'M',1000});
        int n= s.length();
       
        int sum = umap[s.back()];
        for(int i =n-2;i>=0;i--){
            if(umap[s[i]]<umap[s[i+1]]){
                sum-=umap[s[i]];
                
            }else{
                sum+=umap[s[i]];
                
            }
            cout<<sum<<endl;
            
        }
        return sum;
    }
};