class Solution {
public:
    bool static comp(string &a, string &b){
    return a.length()>b.length();
}
    vector<string> commonChars(vector<string>& words) {
        map<char,int>m;
      
        for(auto& x:words[0]){
            m[x]++;
        }
        map<char,int>umap;
        
        for(auto& word:words){
            umap.clear();
            for(auto y:word){
                umap[y]++;
            }
            for(auto& letter:m){
                letter.second = min(letter.second,umap[letter.first]);
            }
        }
        vector<string >solution;
         string s="";
        for(auto x:m){
            while(x.second>0){
               
                 s = x.first;
                cout<<s<<endl;
               solution.push_back(s);
                x.second--;
            }
        }
        
        
        return solution;
    }
};