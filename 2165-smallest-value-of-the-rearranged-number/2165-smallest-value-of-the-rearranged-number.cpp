class Solution {
public:
    long long smallestNumber(long long num) {
      
    bool sign = num>0;
        num = abs(num);
        if(sign){
           string str = to_string(num);
            sort(str.begin(),str.end());
            int i= 0;
            while(str[i]=='0'){
                i++;
            }
            swap(str[0],str[i]);
            num=stoll(str);
            
        }
        else{
            
            string str = to_string(num);
            sort(str.begin(),str.end(),greater());
            num = stoll(str) * (-1);
        }
        return num;
    }
};
