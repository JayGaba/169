// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int left, right;
        if(n == 1)  return s;

        string longestpalindrome = "";

        for(int i = 1; i < s.length(); i++){
            left = i;
            right = i;
            while(s[left] == s[right]){
                left--;
                right++;
                if(left < 0 || right >= s.length()){
                    break;
                }
            }
            string palindrome = s.substr(left+1, right-left-1);
            longestpalindrome = palindrome.length()>longestpalindrome.length()?palindrome:longestpalindrome;
        }
        for(int i = 1; i < s.length(); i++){
            left = i-1;
            right = i;
            while(s[left] == s[right]){
                left--;
                right++;
                if(left < 0 || right >= s.length()){
                    break;
                }
            }
            string palindrome = s.substr(left+1, right-left-1);
            longestpalindrome = palindrome.length()>longestpalindrome.length()?palindrome:longestpalindrome;
        }
        return longestpalindrome;
    }
};
