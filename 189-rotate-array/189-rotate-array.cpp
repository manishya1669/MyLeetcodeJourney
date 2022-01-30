class Solution {
public:
    void rev(vector<int>&v,int high,int low){
        while(low<high){
            swap(v[high],v[low]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        rev(nums,n-1-k,0);
        rev(nums,n-1,n-k);
        reverse(nums.begin(),nums.end());
        
    }
};