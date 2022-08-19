class Solution {
public:
    int maximum(vector<int>&nums,int first ,int last){
        int maxi = INT_MIN;
       for(int i = first;i<=last;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int i =0;i<nums.size();i++){
            while(!pq.empty() && pq.top().second<=(i-k)){
                pq.pop();
            }
            pq.push(make_pair(nums[i],i));
            
            if(i>=(k-1)){
                v.push_back(pq.top().first);
            }
        }
        return v;
        
        
    }
        
};