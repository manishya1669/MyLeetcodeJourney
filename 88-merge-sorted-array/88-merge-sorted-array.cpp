class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
      int t = n+m-1;
        n=n-1;
        m=m-1;
        while(m>=0 and n>=0){
            if(nums1[m]>nums2[n]){
                nums1[t]=nums1[m];
                m--;
                t--;
            }else{
                nums1[t]=nums2[n];
                n--;
                t--;
            }
        }
        while(m >= 0){
            nums1[t]=nums1[m];
            m--;
            t--;
        }
        while(n >=0){
            nums1[t]=nums2[n];
            n--;
            t--;
        }
       
    }
};
 
       