// https://leetcode.com/problems/two-sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i];
            if(hash.find(compliment) != hash.end()){
                return {hash[compliment], i};   
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
