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
    bool ok(TreeNode* root,long long max,long long min){
        if(!root) return true;
        if(root->val>=max||root->val<=min) return false;
        if(!ok(root->left,root->val,min)) return false;
        if(!ok(root->right,max,root->val)) return false;
        return true;
    }
    bool isValidBST(TreeNode* root) {
        return ok(root,LLONG_MAX,LLONG_MIN);
    }
};