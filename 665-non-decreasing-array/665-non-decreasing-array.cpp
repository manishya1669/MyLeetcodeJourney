class Solution {
public:

    
      bool checkPossibility(vector<int>& nums) {  
        int n = nums.size();
        int pos = -1;
        int count = 0;
        
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] > nums[i + 1])
            {
                count++;
                pos = i;
            }
        }
        
        if(count > 1)
            return false;
          
        if(count == 0)
            return true;
          
         if(pos == 0 || pos == n - 2)   
            return true;
        
        
        if(nums[pos - 1] <= nums[pos + 1] || nums[pos] <= nums[pos + 2])
            return true;
        
        return false;
    }
};
