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

    TreeNode* f(vector<int>& post, int I, int j, int J)
    {
        if(j>J) return nullptr;
        auto y{m_in[post[I]]};
        return new TreeNode(post[I], f(post, I-1+y-J, j, y-1), f(post, I-1, y+1, J));
    }
public:    
    TreeNode* buildTree(vector<int>& in, vector<int>& post) 
    {
        for(auto i{0}; i<size(in); m_in[in[i]]=i, ++i);
        return f(post, size(post)-1, 0, size(in)-1);    
    }
};