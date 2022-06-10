class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0,right =0;
        int ans =INT_MIN;
        if(s.length()==0)return 0;
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++){
            umap[s[right]]++;
            while(umap[s[right]] >1){
                char remove = s[left];
                left++;
                umap[remove]--;
            }
            ans = max(ans,right - left +1);
            right++;
        }
        return ans;
    }
};