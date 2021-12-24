class Solution {
public:
    
    
     vector<vector<int>> merge(vector<vector<int>>& intervals) {
     
     vector<vector<int>> result;
     sort(intervals.begin(),intervals.end());
     
     int first = intervals[0][0];
     int second = intervals[0][1];
        
     for(int i=1; i<intervals.size(); i++){
             
             if(second >= intervals[i][0]){
                 second = max(second,intervals[i][1]);
             }
             else{
                 result.push_back({first,second});
                 first = intervals[i][0];
                 second = intervals[i][1];
             }
     }
   
    result.push_back({first,second});
    return result;
    }
};