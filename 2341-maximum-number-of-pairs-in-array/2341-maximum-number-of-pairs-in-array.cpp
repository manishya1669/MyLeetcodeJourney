class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>v(2,0);
        unordered_map<int,int>umap;
        for(auto x:nums){
           umap[x]++;
        }
        int paircount=0;
        int elementcount =0;
        for(auto x:umap){
            if(x.second %2==0){
                paircount = paircount + x.second /2;
                
            }else{
                paircount = paircount + x.second/2;
                elementcount += x.second %2;
            }
        }
        v[0]=paircount;
        v[1]=elementcount;
        return v;
    }
};