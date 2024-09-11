// https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(char c : magazine){
            int pos = ransomNote.find(c);
            if(pos != npos){
                ransomNote.erase(pos,1);
            }
        }
        return ransomNote.empty();

    }
};
