class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>umap;
        for(auto x:s){
            umap[x]++;
        }
        vector<pair<int,char>>v;
        
        for(auto x:umap){
            v.push_back(make_pair(x.second,x.first));
        }
        sort(v.begin(),v.end(),greater<>());
        string str = "";
        for(int i =0;i<v.size();i++){
           int x = v[i].first;
            while(x--){
                 str+=v[i].second;
            }
        }
        return str;
    }
};