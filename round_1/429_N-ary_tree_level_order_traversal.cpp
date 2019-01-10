/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        int level = 0;
        traversal(root, result, level);
        return result;
    }
private:
    void traversal(Node* root,  vector<vector<int>> & result, int level)
    {
        if(!root)
            return;
        if(result.size()<level+1)
            result.push_back(vector<int>());
        result[level].push_back(root->val);
        for(int i=0;i<root->children.size();i++)
            traversal(root->children[i], result, level+1);
    }
};
