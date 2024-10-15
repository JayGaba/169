// https://leetcode.com/problems/evaluate-reverse-polish-notation/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int ans = 0;
        for(auto it : tokens){
            if(it == "+" || it == "-" || it == "*" || it == "/"){
                int a = stoi(s.top());
                s.pop();
                int b = stoi(s.top());
                s.pop();
                int c = ((it == "+") ? (b + a) : ((it == "-") ? (b - a) : ((it == "*") ? (b * a) : (b / a))));
                s.push(to_string(c));

            }
            else{
                s.push(it);
            }
        }
        return stoi(s.top());
    }
};
