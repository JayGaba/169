// https://leetcode.com/problems/balanced-binary-tree

class Solution {
public:
    pair<bool, int> func(TreeNode* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        pair<bool, int> left = func(root->left);
        pair<bool, int> right = func(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if(leftAns && rightAns && diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }

        return ans;
    }
    bool isBalanced(TreeNode* root) {
        return func(root).first;
    }
};
