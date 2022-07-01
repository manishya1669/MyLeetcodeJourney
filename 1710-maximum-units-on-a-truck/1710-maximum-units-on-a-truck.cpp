class Solution {
public:
    static bool comparator(vector<int>&a,vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),comparator);
        int sum=0;
        
        for(auto box : boxTypes){
            
            if(truckSize< box[0]){
                sum += truckSize *  box[1];
                break;
            }
            sum += box[0] * box[1];
            truckSize -=box[0];
        }
        
        
//         for(int i =0;i<boxTypes.size();i++){
           
//             if(truckSize>boxTypes[i][0]){
//                 sum+=boxTypes[i][0] * boxTypes[i][1];
//                 truckSize= truckSize - boxTypes[i][0];
                
//             }else{
//                 sum += truckSize * boxTypes[i][1];
                
//             }
            
        
        return sum;
    }
};