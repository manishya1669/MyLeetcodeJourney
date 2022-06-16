class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int n = plants.size();
        int sum =0;
        int cap = capacity;
        for(int i=0;i<n;i++){
            
            if(cap<plants[i]){
                cap = capacity;
                sum += 2 * i;
            }
            cap -= plants[i]; 
        }
        return sum + n;
    }

};