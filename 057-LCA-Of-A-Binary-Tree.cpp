// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* u, TreeNode* v) {
        if(root == NULL)    return NULL;
        if(root == u || root == v){
            return root;
        }
        TreeNode* leftAns = lowestCommonAncestor(root->left, u, v);
        TreeNode* rightAns = lowestCommonAncestor(root->right, u, v);

        if(leftAns==NULL && rightAns!=NULL) return rightAns;
        if(leftAns!=NULL && rightAns==NULL) return leftAns;
        if(leftAns!=NULL && rightAns!=NULL) return root;
        else return NULL;

    }
};
