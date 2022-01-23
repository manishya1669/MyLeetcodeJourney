class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>pos;
        vector<int>neg;
        int n= nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]>0)pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int k =0;
        
        for(int i = 0;i<nums.size();i=i+2){
            nums[i] =pos[k] ;
            nums[i+1] = neg[k];
            k++;
        }
        neg.clear();
        pos.clear();
        return nums;
        
       
    }
};
// vector<int> neg;
//         vector<int>pos;
		
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]>=0)pos.push_back(nums[i]);
//             else 
//             neg.push_back(nums[i]); 
            
            
//         }
        
//         int k=0 ;
        
//         for(int i=0;i<nums.size();i+=2)
//         {
//           if(k<pos.size())     {
//             nums[i]=pos[k];
//             nums[i+1]=neg[k];
//           k++;}
//         }
        
//         neg.clear();
//         pos.clear();
//         return nums;