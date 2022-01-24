class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
         int c=0;
        int l = 0;
            int count =0;
        if(isupper(word[0]) ){
           
                
            for(int i =1;i<n;i++){
                if(isupper(word[i]))
                    count++;
                
              else if(islower(word[i]))
                  c++;
              
            }
           
        }
      else  if(islower(word[0])){
          for(int i =1;i<n;i++){
              if(islower(word[i]))
                  l++;
          }
      }
        if( (count==n-1) || (c==n-1) || (l==n-1))
            return true;
        return false;
    }
};