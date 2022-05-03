class Solution {
public:
    int gcd(int a, int b)
{
  
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
    int findGCD(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
       return gcd(maxi,mini);
        
    }
};