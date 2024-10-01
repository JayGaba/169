// https://leetcode.com/problems/binary-tree-level-order-traversal/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)    return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> currLevel;
            int levelSize = q.size();
            for(int i = 0; i < levelSize; i++){
                TreeNode* currNode = q.front();
                q.pop();
                currLevel.push_back(currNode->val);
                if(currNode->left != NULL)  q.push(currNode->left);
                if(currNode->right != NULL)  q.push(currNode->right);
            }
            ans.push_back(currLevel);
        }
        return ans;
    }
};
