/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=nullptr;
    bool flag=true;
    void ok(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return;
        if(((p->val>root->val&&q->val<root->val)||(p->val<root->val&&q->val>root->val))&&flag){
            ans=root;
            flag=false;
        }
        if((p->val==root->val||q->val==root->val)&&flag){
            ans=root;
            flag=false;
        }
        if(p->val<root->val){
            ok(root->left,p,q);
        }else ok(root->right,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        ok(root,p,q);
        return ans;
    }
};