class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
       vector<int>one1(26,0);
        vector<int>two2(26,0);
        int sone = s1.length();
        int stwo = s2.length();
        
        if(sone>stwo)
            return false;
        
        int left =0;
        int right =0;
        while(right<sone){
            one1[s1[right] -'a']+=1;
            two2[s2[right] -'a']+=1;
            right +=1;
        }
        right -=1;
        while(right<stwo){
            if(one1==two2)
                return true;
            right+=1;
            if(right != stwo)
                two2[s2[right]-'a']+=1;
            two2[s2[left] -'a']-=1;
            left+=1;
        }
        return false;
    }
};

        
       