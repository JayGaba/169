// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
class Solution {
public:

    void solve(TreeNode* root, vector<int>& in){
        if(root == NULL)    return;
        solve(root->left, in);
        in.push_back(root->val);
        solve(root->right, in);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> in;
        solve(root, in);
        return in[k-1];

    }
};
