// https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (st.empty()) return false;
                char open = st.top();
                st.pop();
                if (s[i] == ')' && open != '(' || s[i] == ']' && open != '[' ||
                    s[i] == '}' && open != '{') {
                    return false;
                }
            }
            else {
                st.push(s[i]);
            }
        }

        return st.empty();
    }
};
