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
    void ok(TreeNode* root,int val){
        if(!root) return;
        if(root->val>val&&!root->left){
            TreeNode* a=new TreeNode(val);
            root->left=a;
            return;
        }else if(root->val<val&&!root->right){
            TreeNode* a=new TreeNode(val);
            root->right=a;
            return;
        }
        if(root->val>val){
            ok(root->left,val);
        }else{
            ok(root->right,val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* a=new TreeNode(val);
            return a;
        }
        ok(root,val);
        return root;
    }
};