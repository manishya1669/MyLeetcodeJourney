class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> stack;
        int maxLen = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(')
                stack.push_back(i);
            else {
                if (!stack.empty() && s[stack.back()] == '(') {
                    stack.pop_back();
                    int lastPos = -1;
                    if (!stack.empty())
                        lastPos = stack.back();
                    int curLen = i - lastPos;
                    maxLen = (maxLen < curLen) ? curLen : maxLen;
                } else
                    stack.push_back(i);
            }
        }
        return maxLen;
    }
};