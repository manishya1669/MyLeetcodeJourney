class Solution {
public:
    static bool comp(pair<int ,char>&a,pair<int,char>&b){
        return a.first>b.first;
    }
    string frequencySort(string s) {
        unordered_map<char,int>umap;
        for(auto x:s){
            umap[x]++;
        }
        vector<pair<int,char>>v;
        for(auto x:umap){
            v.push_back({x.second,x.first});
            cout<<x.second<<x.first<<endl;
        }
        sort(v.begin(),v.end(),comp);
        string str="";
        for(auto x:v){
            int count=x.first;
            while(count--){
                 str+=x.second;
            }
        }
        return str;
        
    }
};