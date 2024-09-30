// https://leetcode.com/problems/k-closest-points-to-origin/
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int, int> distance_map;
        for(int i = 0; i < points.size(); i++){
            int squared = points[i][0] * points[i][0] + points[i][1] * points[i][1]; 
            distance_map.insert({squared, i});
        }
        vector<vector<int>> ans;
        for(auto it = distance_map.begin(); k > 0 && it != distance_map.end(); it++){
            ans.push_back(points[it->second]);
            k--;
        }
        return ans;
    }
};
