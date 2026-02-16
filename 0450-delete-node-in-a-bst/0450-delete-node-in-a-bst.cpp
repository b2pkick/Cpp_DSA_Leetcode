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
    void ok(TreeNode* root,int key){
        if(!root) return;
        if(root->left&&root->left->val==key&&!root->left->left&&!root->left->right){
            root->left=nullptr;
            return;
        }else if(root->right&&root->right->val==key&&!root->right->left&&!root->right->right){
            root->right=nullptr;
            return;
        }else if(root->val==key&&root->right){
            TreeNode* b=root->right;
            while(b->left){
                b=b->left;
            }
            b->left=root->left;
            root->val=root->right->val;
            TreeNode* p=root->right->left;
            root->right=root->right->right;
            root->left=p;
        }else if(root->val==key&&!root->right){
            root->val=root->left->val;
            TreeNode* p=root->left->left;
            root->right=root->left->right;
            root->left=p;
        }
        if(root->val>key){
            ok(root->left,key);
        }else ok(root->right,key);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        if(root->val==key&&root->right){
            TreeNode* b=root->right;
            while(b->left){
                b=b->left;
            }
            b->left=root->left;
            root->val=root->right->val;
            TreeNode* p=root->right->left;
            root->right=root->right->right;
            root->left=p;
        }else if(root->val==key&&!root->right){
            return root->left;
        }
        ok(root,key);
        return root;
    }
};