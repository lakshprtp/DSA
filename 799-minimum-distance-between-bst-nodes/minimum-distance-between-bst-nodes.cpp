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
        if(root==NULL) return;

        valid(root->left);
        ans.push_back(root->val);
        valid(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        valid(root);
        int mindiff=INT_MAX;
        for(int i =1;i<ans.size();i++){
            int diff=ans[i]-ans[i-1];
            mindiff=min(diff,mindiff);
        }

        return mindiff;
        
    }
};