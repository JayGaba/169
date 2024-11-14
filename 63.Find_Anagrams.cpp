// https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        
        vector<int> output;

        int s_size = s.length();
        int p_size = p.length();

        array<int, 26> p_map{};
        for(auto c : p){
            p_map[c-'a']++;
        }

        array<int, 26> window_map{};
        for(int i = 0; i < p_size; i++){
            window_map[s[i]-'a']++;
        }

        if(window_map == p_map) output.push_back(0);

        for(int i = 1; i < s_size - p_size + 1; i++){
            window_map[s[i+p_size-1]-'a']++;
            window_map[s[i-1]-'a']--;
            if(window_map == p_map){
                output.push_back(i);
            }
        }
        return output;


    }
};
