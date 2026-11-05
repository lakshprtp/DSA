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
vector<string>ans;
void allpath(TreeNode* root,string path){
    if (root==NULL) return;

    if (!path.empty()){
        path+="->";
    }

    path+=to_string(root->val);

    if (root->right==NULL&&root->left==NULL){
        ans.push_back(path);
        return;
    }

    allpath(root->left,path);
    allpath(root->right,path);
    
}
    vector<string> binaryTreePaths(TreeNode* root) {
        allpath(root,"");
        return ans;
    }
};