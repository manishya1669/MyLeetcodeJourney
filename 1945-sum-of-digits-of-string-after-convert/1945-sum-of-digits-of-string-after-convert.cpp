class Solution {
public:
    
   int getLucky(string s, int k)
    {
        string str;
        int res = 0;
        for(int i=0;i<s.size();i++)
        {
            str += to_string(s[i] - 96);
        }
        for(int i=0;i<str.size();i++)
        {
            res += (str[i] - 48);
        }
        
        int ans = 0;
        if(k > 1)
        {
            while(k > 1)
            {
                ans = 0;
                while(res > 0)
                {
                    ans += res % 10;
                    res = res / 10;
                }
                res = ans;
                k--;
            }
            return ans;
        }
        return res;
    }
};