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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root==NULL ) {
            TreeNode* ans=new TreeNode(val);
            return ans;
        }
        if (val<root->val&&root->left==NULL){
            TreeNode* ans=new TreeNode(val);
            root->left=ans;
            return root;
        }

        if(val>root->val&&root->right==NULL){
            TreeNode* ans=new TreeNode(val);
            root->right=ans;
            return root;
        }

        if(val>root->val)  insertIntoBST(root->right,val);
        if(val<root->val)  insertIntoBST(root->left,val);

        return root;
    }
};