// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mpp;
        int oddCount = 0;
        for(char c : s){
            mpp[c]++;
            if(mpp[c] % 2 != 0) oddCount++;
            else    oddCount--;
        }
        if(oddCount > 1){
            return s.length() - oddCount + 1;
        }
        return s.length();

    }
};
