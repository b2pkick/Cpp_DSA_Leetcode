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
    unordered_set<int> mp;
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(findTarget(root->left,k)) return true;
        if(mp.find(k-root->val)!=mp.end()) return true;
        mp.insert(root->val);
        if(findTarget(root->right,k)) return true;
        return false;
    }
};