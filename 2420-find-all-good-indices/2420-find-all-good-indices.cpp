class Solution {
public:
     vector<int> goodIndices(vector<int>& nums, int k) {
         int N= nums.size();
          vector<int>v;
           vector<int>increasing(N,1),decreasing(N,1);
         
         for(int i =1;i<N;i++){
             if(nums[i]<=nums[i-1]){
                 increasing[i]= increasing[i-1]+1;
             }
         }
         for(int i=N-2;i>=0;i--){
             if(nums[i]<=nums[i+1]){
                 decreasing[i]=decreasing[i+1]+1;
             }
         }
         for(int i =k;i<N-k;i++){
             if(increasing[i-1] >=k && decreasing[i+1] >=k){
                 v.push_back(i);
             }
         }
         return v;
     }
};