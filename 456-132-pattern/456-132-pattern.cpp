class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
         arr[0]=nums[0];
        for(int i =1;i<n;i++){
            arr[i]=min(arr[i-1],nums[i]);
        }
        
        stack<int>s;
        
        for(int j=n-1;j>=0;j--){
            if(nums[j]>arr[j]){
                
                while(!s.empty() && s.top()<=arr[j])
                    s.pop();
                
                if(!s.empty() && s.top() <nums[j])
                    return true;
                
                s.push(nums[j]);
            }
        }
         return false;
    }
};