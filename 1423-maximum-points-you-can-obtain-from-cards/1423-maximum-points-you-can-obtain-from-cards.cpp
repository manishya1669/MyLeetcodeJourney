class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
       
        int windowSum=0;
        for(int i=0;i<k;i++){
            windowSum +=cardPoints[i];
        }
        int ans = windowSum;
        int j = cardPoints.size()-1;
        for(int i =k-1;i>=0;i--){
            windowSum -=cardPoints[i];
            windowSum +=cardPoints[j];
            ans = max(ans,windowSum);
            j--;
        }
        return ans;
        
    }
};