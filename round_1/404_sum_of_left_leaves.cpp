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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        int result = 0;
        result = sumLeft(root->left)+sumRight(root->right);
        return result;
    }
private:
    int sumLeft(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return root->val;
        else 
            return sumLeft(root->left)+sumRight(root->right);
    }
    int sumRight(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 0;
        else 
            return sumLeft(root->left)+sumRight(root->right);
    }
};
