class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long  long >v;
        //Represeneting my number in the form of a , a+1,a+2
        
        if(num%3 != 0)return v;
        
        v.push_back(num/3 -1);
        v.push_back(num/3 );
        v.push_back(num/3 +1);
        
        return v;
    }
};