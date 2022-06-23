class Solution {
public:
   static   bool  comp(vector<int>&v1, vector<int>&v2){
        return v1[1]<v2[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int>pq;
        sort(courses.begin(),courses.end(),comp);
        
        int durationSum =0;
        for(auto course:courses){
            
            if( durationSum + course[0] <=course[1]){
                durationSum +=course[0];
                pq.push(course[0]);
            }
            else if(!pq.empty() && pq.top()>=course[0]){
                durationSum = durationSum - pq.top() + course[0];
                pq.pop();
                pq.push(course[0]);
            }
           
        }
        return pq.size();
    }
};