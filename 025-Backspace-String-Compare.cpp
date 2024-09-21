// https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    string func(string s){
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                if(st.empty())  continue;
                else st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        string s1 = func(s);
        string t1 = func(t);
        return s1==t1;
    }
};
