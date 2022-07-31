class Solution {
public:
    int func(vector<int>& nums){
         int mini=INT_MAX;
          int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i] !=0){
               
                mini=min(mini,nums[i]);
                
            }
        }
        return mini;
    }
    int minimumOperations(vector<int>& nums) {
        
        int n = nums.size();
        int sum =0;
        if(n==1 && nums[n-1] != 0)return 1;
       for(int i =0;i<n;i++){
            if(nums[i] !=0){
                sum+=nums[i];                
            }
       }  
        int count=0;
        while( sum>0){
            int mini=func(nums);
            bool flag=false;
                for(int i =0;i<n;i++){
                   if(nums[i] !=0  && nums[i] >=mini){
                      nums[i]=nums[i]-mini;
                       sum-=mini;
                       flag=true;
               }
             }
            if(flag==true)count++;
            flag=false;
        }
          return count;
    }
       
    
};