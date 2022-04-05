class Solution {
public:
   int trap(vector<int>& height) {
        int ans = 0, left = 0, right = height.size()-1, leftMax = -1, rightMax = -1;
        
        while(left < right){
            if(height[right] >= height[left]){
                if(height[left] >= leftMax) leftMax = height[left];
                else ans += leftMax - height[left];
                left++;
            }
            else{
                if(height[right] >= rightMax) rightMax = height[right];
                else ans += rightMax - height[right];
                right--;
            }
        }        
        return ans;
    }
};