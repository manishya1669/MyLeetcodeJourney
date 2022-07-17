class Solution {
public:
    int findsum(int x){
        int sum =0;
        while(x>0){
            int lastdigit = x%10;
            sum+=lastdigit;
            x=x/10;
        }
      
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        
        unordered_map<int,vector<int>>umap;
        bool flag = false;
         int maxi =-1;
        sort(nums.begin(),nums.end());
        for(auto x:nums){
            
            int digitsum = findsum(x);
            
            umap[digitsum].push_back(x);
            
            // if(umap.find(digitsum) != umap.end()){
            //       cout<<digitsum<<" ";
            //     umap[digitsum] = umap[digitsum] + x;
            //     maxi = max(maxi, umap[digitsum]);
            //     flag = true;
            // }else{
            //     umap[digitsum]= x;
            // }
        }
        for(auto x:umap){
            
           auto v= x.second;
            
            int n  = v.size();
            
            if(n>=2){
                maxi = max(v[n-1]+v[n-2], maxi);
            }
        }
       
        
       
        return maxi;
        
        
    }
};