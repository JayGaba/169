// https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void solve(vector<int>& candidates, int target, int index, vector<vector<int>>& ans, vector<int>& ds){
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[index] <= target){
            ds.push_back(candidates[index]);
            solve(candidates,target-candidates[index],index,ans,ds);
            ds.pop_back();
        }
        solve(candidates,target,index+1,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(candidates, target, 0, ans, ds);
        return ans;
    }
};
