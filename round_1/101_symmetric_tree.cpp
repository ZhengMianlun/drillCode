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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        else
            return isSymm(root->left,root->right);
    }
private:
    bool isSymm(TreeNode* left, TreeNode* right)
    {
        if(left==NULL&&right==NULL)
            return true;
        else if(left!=NULL&&right!=NULL)
        {
            if(left->val!=right->val)
                return false;
            return isSymm(left->left,right->right)&&isSymm(left->right,right->left);
        }
        else
            return false;
    }
};
