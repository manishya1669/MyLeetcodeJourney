class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>v(n,0);
       
        sort(nums.begin(),nums.end());
        int i =1;
        int j = n-1;
        while(i<n){
            v[i]=nums[j];
            j--;
            i+=2;
        }
        i = 0;
        while(i<n){
            v[i]=nums[j];
            j--;
            i+=2;
        }
        for(int  i=0;i<n;i++){
            nums[i]=v[i];
        }
    }
};