/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/
class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        if(grid.size()==0)
            return nullptr;
        else
            return tree(grid, 0, 0, grid.size());
    }
private:
    Node* tree(vector<vector<int>>& grid, int i, int j, int len)
    {
        if(len<=0)
            return nullptr;
        for(int m=i;m<i+len;m++)
        {
            for(int n=j;n<j+len;n++)
            {
                if(grid[i][j]!=grid[m][n])
                    return new Node(false, false, 
                                    tree(grid, i, j, len / 2),
                                    tree(grid, i, j + len / 2, len / 2),
                                    tree(grid, i + len/ 2, j, len / 2),
                                    tree(grid, i + len / 2, j + len / 2, len / 2));
            }
        }
        return new Node(grid[i][j] == 1, true, NULL, NULL, NULL, NULL);       
    }
};
