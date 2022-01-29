class Solution {
        public:
           int largestRectangleArea(vector<int>& height) {
    int n = height.size(), ans = 0, p;
    vector<int> left(n,0), right(n,n);
    for (int i = 1;i < n;++i) {
        p = i-1;
        while (p >= 0 && height[i] <= height[p])
            p = left[p] - 1;
        left[i] = p + 1;
    }
    for (int i = n-2;i >= 0;--i) {
        p = i+1;
        while (p < n && height[i] <= height[p])
            p = right[p];
        right[i] = p;
    }
    for (int i = 0;i < n;++i)
        ans = max(ans,height[i]*(right[i]-left[i]));
    return ans;
}
        };