class Solution {
public:
     int compareVersion(string v1, string v2) {
        int p1=0, p2=0, l1=v1.length(), l2=v2.length();
        
        while(p1<l1 || p2<l2) {
            
            int num1 = 0, num2=0;
           while(p1<l1 && v1[p1]!='.') {
                num1 = num1*10 + v1[p1] - '0';
                p1++;
            }
                        p1++;
            
            while(p2<l2 && v2[p2]!='.') {
                num2 = num2*10 + v2[p2] - '0';
                p2++;
            }
            p2++;
            
            if(num1<num2)
                return -1;
            if(num1>num2)
                return 1;
        }
        return 0;
    }
};