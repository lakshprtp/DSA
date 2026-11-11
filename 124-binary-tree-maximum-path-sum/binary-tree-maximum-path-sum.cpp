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
int solve(TreeNode* root,int &ans){
    if (root==NULL) return 0;


    int left=solve(root->left,ans);
    int right=solve(root->right,ans);
    //at every node i am checking what is max? wo node, node+left,node+right ya fir node+left+right
    
    
    ans=max({ans,root->val+left,root->val+right,root->val+left+right,root->val});
    return root->val+max({0,left,right});

}
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root,ans);
        return ans;

    }
};