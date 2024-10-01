// https://leetcode.com/problems/validate-binary-search-tree/
class Solution {
public:
    bool check(TreeNode* root, long long min, long long max){
        if (root == NULL)   return true;
        if (root->val > min && root->val < max){
            bool left = check(root->left, min, root->val);
            bool right = check(root->right, root->val, max);
            return left && right;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
