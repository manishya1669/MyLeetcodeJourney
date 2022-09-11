class Solution {
public:
    int lengthOfLastWord(string s) {
       
        int len=0;
      for(int i=s.length()-1;i>=0;i--){
          if(s[i]==' ' && s.length()>0 && len!=0){
              return len;
          }
          if(s[i] !=' ')len++;
      }
        
          
        return len;
    }
    
};