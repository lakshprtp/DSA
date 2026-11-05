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
bool ans=false;
    void path(TreeNode* root, int target){
        if (root==NULL) return;
        target=target-(root->val);

        
        if (target==0&& root->left==NULL && root->right==NULL){
            ans=true;
            return;
        }

        path(root->left,target);
        path(root->right,target);
    }
    bool hasPathSum(TreeNode* root, int target) {
        path(root,target);
        return ans;
    }
};