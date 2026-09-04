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
    vector<int>ans;
    void valid(TreeNode* root){
        if (root==NULL) return;
        valid(root->left);
        ans.push_back(root->val);
        valid(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        valid(root);
        return ans[k-1];
    }
};