class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int,int>mp;
        for(auto x:arr1){
            mp[x]++;
        }
        int j =0;
        for(int i =0;i<arr2.size();i++){          
                while(mp[arr2[i]]>0){
                    arr1[j++]=arr2[i];
                    mp[arr2[i]]--;
                
            }
        }
        for(auto x:mp){
            if(x.second >0){
              while(x.second>0){
                    arr1[j++]=x.first;
                x.second--;
              }
            }
        }
        return arr1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<int>ans;
//         map<int,int> umap;
//         int n = arr1.size();
//         for(auto x : arr1){
//             umap[x]++;
            
//         }
//         for(auto x: arr2){
//             if(umap.find(x) != umap.end()){
//                 auto temp = umap.find(x);
//                 int count = temp->second;
//                 vector<int>v(count,x);
//                 ans.insert(ans.end(),v.begin(),v.end());
//                 umap.erase(x);
//             }
//         }
        
//         for(auto x:umap){
//            int ele = x.first;
//             int count = x.second;
//               vector<int>v(count,ele);
//                 ans.insert(ans.end(),v.begin(),v.end());
            
//         }
//         return ans;
    }
};