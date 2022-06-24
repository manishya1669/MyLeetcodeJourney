class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves=0;
        
        while(target >1  && maxDoubles >0){
            
            if(target%2 != 0 ){
                target =target-1;
                moves++;
            }else{
                target =target/2;
                maxDoubles--;
                moves++;
            }
        }
        moves=moves+ target -1;
        return moves;
    }
};