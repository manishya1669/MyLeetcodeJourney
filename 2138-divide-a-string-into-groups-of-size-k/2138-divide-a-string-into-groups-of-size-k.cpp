class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
     
        vector<string>v;
        string partition = "";
        int n = s.size();
        
        for(int i =0;i<n;i++){
            partition.push_back(s[i]);
            if((i+1)%k ==0){
                v.push_back(partition);
                partition="";
            }
            
        }
       
        if(partition != ""){
             int si = partition.size();
        for(int i = si+1;i<=k;i++){
            partition.push_back(fill);
            
        }
        v.push_back(partition);
        }
        return v;
        
    }
};