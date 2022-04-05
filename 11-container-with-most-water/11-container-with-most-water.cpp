class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = INT_MIN;
        int i=0;
        int j = height.size()-1;
        int area ;
        while(i<j){
            area = min(height[i],height[j]) * (j-i);
            maxi = max(maxi,area);
            if(min(height[i],height[j]) == height[i]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
       
    }
};