class Solution {
public:
    static bool com(vector<int> &a, vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      
        sort(boxTypes.begin(),boxTypes.end(),com);
        int n= boxTypes.size();
        int sum=0;
        for(int  i=0;i<n;i++){
            if(truckSize >=boxTypes[i][0]){
                truckSize -=boxTypes[i][0];
                sum +=boxTypes[i][1] * boxTypes[i][0];
                cout<<sum<<" ";
            }
            else{
                sum +=truckSize * boxTypes[i][1];
                break;
            }
        }
        return sum;
        
    }
};