class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
         int maxi = INT_MIN;
         int count=0;
          int start =0;
        int uni = 0;
         
          for(int i =0;i<n;i++){
              
              while((nums[i]&uni) !=0){
                  int staringElement = nums[start];
                  uni=uni^staringElement;
                  start++;
              }
              uni=uni | nums[i];
              maxi = max(maxi,abs(i-start +1));
          }

        return maxi>1?maxi:1;
    }
};