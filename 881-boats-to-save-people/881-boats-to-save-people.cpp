class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        
        int n= arr.size();
        int i=0;
        int count=0;
        sort(arr.begin(),arr.end());
        int j = n-1;
        while(i<=j){
            if(arr[i]+arr[j] <=limit)
                i++;
            j--;
            count++;
        }
        return count;
        
    }
};