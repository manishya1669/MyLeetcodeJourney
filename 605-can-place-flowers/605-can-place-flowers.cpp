class Solution {
public:
    bool canPlaceFlowers(vector<int>flo, int n) {
        int len = flo.size();
        int count =0;
        for(int i = 0;i<len;i++){
            if(flo[i]==0){
            int prev = (i==0 || flo[i-1]==0)?0:1;
            int next = (i==len-1 || flo[i+1]==0)?0:1;
            
            if(prev==0 && next==0){
                flo[i]=1;
                count++;
            }
            }
           
        }
        return count>=n;
         
    }
};