// https://leetcode.com/problems/palindrome-number
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long reverse = 0;
        int x1 = x;
        while(x1 > 0){
            reverse = (reverse*10) + (x1%10);
            x1 /= 10;
        }
        return reverse == x;
    }
};
