class Solution {
public:
    string largestGoodInteger(string num) {
        char result =0;
     for(int i =1;i<num.length()-1;i++){
         if(num[i]==num[i-1] && num[i]==num[i+1]){
            result= max(result,num[i]); 
         }
     }
        if(result ==0)return "";
        
        return string(3,result);
      
    }
};