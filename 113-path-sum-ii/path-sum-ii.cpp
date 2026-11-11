/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<vector<int>>ans;
void solve(TreeNode* root, int target,vector<int>curr){
    if (root==NULL) return;

    curr.push_back(root->val);
    target-=root->val;
    
    if (target==0 && root->left==NULL&&root->right==NULL){
        ans.push_back(curr);
        return;
    }

    solve(root->left,target,curr);
    solve(root->right,target,curr);
    
}

    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<int>curr;
        solve(root,target,curr);
        return ans;
    }
};