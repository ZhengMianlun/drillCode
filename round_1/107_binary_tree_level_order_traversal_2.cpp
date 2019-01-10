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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int level = 0;
        vector<vector<int>> result;
        traversalTree(root,level,result);
        reverse(result.begin(),result.end());
        return result;
    }
private:
    void traversalTree(TreeNode* root, int level, vector<vector<int>> &result)
    {
        if(root==NULL)
            return;
        
        if(result.size()<level+1)
            result.push_back(vector<int>());
        result[level].push_back(root->val);

        traversalTree(root->left,level+1,result);
        traversalTree(root->right,level+1,result);
    }
