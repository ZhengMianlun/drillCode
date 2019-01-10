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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(!(find(root->left,p,q)&&find(root->right,p,q)))
        {
            if(root->val == p->val || root->val == q->val)
                return root;
            if(find(root->left,p,q))
                root = root->left;
            else
                root = root->right;
        }
        return root;        
    }
private:
    bool find(TreeNode * root, TreeNode * p, TreeNode * q)
    {
        if(root == NULL)
            return false;
        if(root->val == p->val || root->val == q->val)
            return true;
        bool result = find(root->left,p,q) || find(root->right,p,q);
        return result;
    }
};
