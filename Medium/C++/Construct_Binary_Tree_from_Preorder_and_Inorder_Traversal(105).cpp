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
class Solution 
{
    unordered_map<int, int> m_in;

    TreeNode* f(vector<int>& pre, int i, int j, int J)
    {
        if(j>J) return nullptr;
        auto y{m_in[pre[i]]};
        return new TreeNode(pre[i], f(pre, i+1, j, y-1), f(pre, i+1+y-j, y+1, J));
    }
public:    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) 
    {
        for(auto i{0}; i<size(pre); m_in[in[i]]=i, ++i);
        return f(pre, 0, 0, size(in)-1);    
    }
};