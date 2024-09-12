// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        int threshold = n / 2;
        
        for (int num : nums) {
            hash[num]++;
            if (hash[num] > threshold) {
                return num;  
            }
        }
        return -1;
    }
};
