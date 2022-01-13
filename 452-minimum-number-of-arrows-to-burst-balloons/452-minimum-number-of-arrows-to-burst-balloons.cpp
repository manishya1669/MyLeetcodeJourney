class Solution {
public:
     int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        int start = 0;
        int end = 0;
        int arrow =0;
        while(end <points.size()){
            start  = end++;
            while(end< points.size() and points[start][1]>=points[end][0]){
                if(points[end][1]<=points[start][1]) //its condition like if one smaller balloon is inside another bigger one , so to  burst ballon we should inside ballon so update the boundry case
                    points[start][1]=points[end][1];
                end++;
            }
            arrow++;
        }
        return arrow;
    }
};