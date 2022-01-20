class Solution {
public:
    bool fine(int mid, vector<int>piles,int H){
        int n = piles.size();
        int sum =0;
        for(int i=0;i<n;i++){
            int x = piles[i]/mid;
            int y = piles[i]%mid;
            if(y>0)
                x++;
            sum +=x;
        }
        return sum<=H;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l =1;
        int r = (1e9 +1);
        while(l<r){
            int mid = l + (r-l)/2;
            if(fine(mid,piles,h) == true)
               r= mid;
            else 
                l = mid +1;
            
            
        }
        return l;
    }
};