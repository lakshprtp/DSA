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
unordered_set<int>mp;
    void valid(TreeNode* root){
        if(root==NULL) return;

        valid(root->left);
        mp.insert(root->val);
        valid(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        valid(root);
        for(auto x:mp){
            int diff=k-x;
            if(mp.find(diff)!=mp.end()&&diff!=x) return true;
        }

        return false;

        
    }
};