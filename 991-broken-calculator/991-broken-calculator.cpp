class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count =0;
        while(target>startValue){
            if(target%2==1){
                target+=1;
                count++;
            }else{
                target/=2;
                count++;
            }
        }
        return count + startValue - target;
    }
};