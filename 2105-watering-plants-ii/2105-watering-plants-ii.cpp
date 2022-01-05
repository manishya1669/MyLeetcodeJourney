class Solution {
public:
  int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int i=0;
        int j=plants.size()-1;
        int a=capacityA;
        int b=capacityB;
        int ans=0;
        while(i<j){
            if(plants[i]<=a){
                a-=plants[i];
                
            }
            else{
                a=capacityA;
                ans++;
                a-=plants[i];
            }
            if(plants[j]<=b){
                b-=plants[j];
                
            }
            else{
                b=capacityB;
                ans++;
                b-=plants[j];
            }
            i++;
            j--;
            
        }
        if(i==j){
            int mx=max(a,b);
            if(mx<plants[i]){
                ans++;
            }
        }
        return ans;
    }
};