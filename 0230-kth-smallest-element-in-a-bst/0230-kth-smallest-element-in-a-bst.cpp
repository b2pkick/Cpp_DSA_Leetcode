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
    bool ok(TreeNode* root,int k,int& i){
        if(!root) return false;
        if(ok(root->left,k,i)) return true;
        if(i==k){
            ans=root->val;
            i++;
            return true;
        }
        i++;
        if(ok(root->right,k,i)) return true;
        return false;
    }
    int kthSmallest(TreeNode* root, int k) {
        int i=1;
        ok(root,k,i);
        return ans;
    }
};