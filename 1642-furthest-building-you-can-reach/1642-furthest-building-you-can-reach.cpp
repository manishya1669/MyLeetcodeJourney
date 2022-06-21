class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       
        priority_queue<int,vector<int>,greater<int>>pq;
        int i;
        for( i =1;i<heights.size();i++){
            
            int diff = heights[i]-heights[i-1];
            
             if(diff>0){
                 pq.push(diff);
                 
             }
            if(pq.size()>ladders){
                int temp = pq.top();
                pq.pop();
                bricks-=temp;
                if(bricks<0){
                    break;
                }
            }
        }
        return i-1;
    }
};