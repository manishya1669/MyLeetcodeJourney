class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int maxi =INT_MIN;
        int mini=INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2 !=0)
                nums[i]*=2;
            
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
        }
        int min_Deviation = maxi - mini;
         priority_queue<int>pq;
        
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while((pq.top()) %2==0){
            int top = pq.top();
            pq.pop();
            min_Deviation = min(min_Deviation,top-mini);
            top/=2;
            mini= min(top,mini);
            pq.push(top);
        }
        min_Deviation= min(min_Deviation,pq.top()-mini);
        return min_Deviation;
        
    }
};