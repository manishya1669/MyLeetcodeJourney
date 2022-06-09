class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
     
        vector<int>v;
        int low = 0;
        int high = num.size()-1;
        
        while(low<high){
            int sum =num[low]+num[high] ;
            
            if(sum >target)high--;
            else if(sum<target)low++;
            else return {low+1,high+1};
        }
        return {};
        
    }
};