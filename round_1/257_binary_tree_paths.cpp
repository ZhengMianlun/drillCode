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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string temp;
        if(root == NULL)
            return result;
        else
            path(result, root, temp);
        return result;
    }
private:
    void path(vector<string> & result, TreeNode* root,string temp)
    {
        temp = temp.empty()?to_string(root->val):temp+"->"+to_string(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            result.push_back(temp);
            return;
        }
        if(root->left)
            path(result, root->left, temp);
        if(root->right)
            path(result, root->right, temp);
    }
};
