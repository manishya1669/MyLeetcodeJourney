class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = cost.size();
        int surplus = 0;
        int max_surplus = 0;
        int S =0;
        for(int i = 0;i<n;i++){
            surplus+=gas[i] - cost[i];
            max_surplus +=gas[i] - cost[i];
            if(surplus <0){
                surplus = 0;
                S=i+1;
            }
        }
        return (max_surplus<0)?-1:S;
    }
};