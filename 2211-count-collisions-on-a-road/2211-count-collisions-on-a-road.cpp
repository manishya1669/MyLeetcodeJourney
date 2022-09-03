class Solution {
public:
    int countCollisions(string dir) {
       
        vector<pair<char,int>>d;
        for(int i=0;i<dir.size();i++){
             int count =1;
            while(dir[i]==dir[i+1] && (i+1)<dir.size()){
                i++;
                count++;
            }
            d.push_back({dir[i],count});
        }
        int ans =0;
        
       for(int i =0;i<d.size()-1;i++){
            if(d[i].first=='R' && d[i+1].first=='L'  ){
               ans+=d[i].second + d[i+1].second;
               // cout<<"FIr:"<<count<<"index:"<<i<<endl;
            }
            else if(d[i].first=='S' && d[i+1].first=='L'){
                 ans+=d[i+1].second;
               //  cout<<"SEc:"<<count<<"index:"<<i<<endl;
            }
            else if(d[i].first=='R' && d[i+1].first=='S'){
                 ans+=d[i].second;
                // cout<<"Thi:"<<count<<"index:"<<i<<endl;
            }
           
               
            
        }
        return ans;
    }
};