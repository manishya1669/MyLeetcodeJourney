class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int count =1;
        int i =0;
        int sum =0;
        while(true){
            sum+=count;
            count++;
            i++;
            
            
            if(sum==target)return i;
            if(sum>target && (sum-target)%2==0)return i;
        }
        return i;
        
    }
   
};