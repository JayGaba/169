// https://leetcode.com/problems/longest-substring-without-repeating-characters
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        if(str.size() == 0) return 0;
        int maxSize = INT_MIN;
        unordered_set<int> st;
        int l = 0;
        for(int r = 0; r < str.size(); r++){
            if(st.find(str[r]) != st.end()){
                while(l<r && st.find(str[r]) != st.end()){
                    st.erase(str[l]);
                    l++;
                }
            }
            st.insert(str[r]);
            maxSize = max(maxSize, r-l+1);
        }
        
        return maxSize;

    }
};
