class Solution {
public:
    
    // void rev(vector<int>& nums,int low,int high){
    //     while(low<high){
    //         swap(nums[low],nums[high]);
    //         low++;
    //         high--;
    //     }
    // }
    // int  rotat(vector<int>& nums,int k){
    //     int n= nums.size();
    //     k=k%n;
    //     int sum =0;
    //     rev(nums,0,n-k-1);
    //     rev(nums,n-k,n-1);
    //     reverse(nums.begin(),nums.end());
    //     for(int i =0;i<n;i++){
    //         sum+=(nums[i] * i);
    //     }
    //     return sum;
    // }
    
    int maxRotateFunction(vector<int>& nums) {
        int n  =nums.size();
        
        int sum =0;
        int prevFun=0;
        if(n==1)return 0;
        for(int  i=0;i<n;i++){
             sum+= nums[i];
           
            prevFun+= (nums[i]*i);
        }
        int maxi =prevFun;
        for(int i =1;i<n;i++){
            int current = prevFun + sum - (n*nums[n-i]);
            prevFun= current;
            maxi = max(maxi,current);
        }
        return maxi;
    }
};