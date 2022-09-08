class Solution {
public:
    int helper(long long n,long long count ){
        if(n==1)return 0 ;
        if(n%2==0){
            count+=1+helper(n/2,count);
        }
        else{
            if(n ==INT_MAX-1){
               return helper(n-1,count);
            }else{
                 return 1+ min(helper(n-1,count),helper(n+1,count));
            }
            
        }
        return count;
    }
    int integerReplacement(int n) {
        long long count =0;
        return   helper(n,count);
        
    }
};