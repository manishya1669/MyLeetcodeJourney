class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int>p;
        int n = nums.size();
    
        if(n <= 1)  return n;
        for(int i = 0; i < n; i++) p.push(nums[i]); 
       // int current = p.top(),
        int longest = 0, count = 0;
       // p.pop();
        while(!p.empty()){
            int item = p.top();
            p.pop();
            if(item == p.top() + 1)  count++;
            else if(item == p.top()) continue;
            else {
                if(count > longest)  longest = count;
                count = 0;
            }
           // current = item;
        }
        if(count > longest) longest = count;
        return longest + 1;
    }  
};