class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>>v;
        if(m*n != original.size())return v;

        int i =0;
        while(i<(m*n)){
            
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(original[i]);
                i++;
            }
            v.push_back(temp);
        }
        
        
        return v;
    }
};