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
vector<int>arr;
void valid(TreeNode* root){
    if(root==NULL) return;
    valid(root->left);
    arr.push_back(root->val);
    valid(root->right);
}

    TreeNode* build(vector<int>&arr, int s, int e){
        if (s>e) return NULL;

        int mid =s+(e-s)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=build(arr,s,mid-1);
        root->right=build(arr,mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        valid(root);
        return build(arr,0,arr.size()-1);
        
    }
};