class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
       
        int n = cost.size();
       sort(cost.rbegin(),cost.rend());
        int res = 0;
        int count = 0;
        for(int i =0;i<n;i++){
            if(count ==2){
                count =0;
                continue;
            }
            res +=cost[i];
            count++;
        }
        return res;
        
    }
    
};

//  int d = n;
//         for(int i = 0;i<n;i++){
           
//                 int sum = cost[i]+cost[i+1];
//                 res+=sum;
//                  i=i+3;
               