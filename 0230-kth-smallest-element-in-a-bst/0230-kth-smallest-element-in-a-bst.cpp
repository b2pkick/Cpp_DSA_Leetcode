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
    int ans;
    void ok(TreeNode* root,int k,int& i){
        if(!root) return;
        ok(root->left,k,i);
        if(i==k){
            ans=root->val;
            i++;
            return;
        }
        i++;
        ok(root->right,k,i);
    }
    int kthSmallest(TreeNode* root, int k) {
        int i=1;
        ok(root,k,i);
        return ans;
    }
};