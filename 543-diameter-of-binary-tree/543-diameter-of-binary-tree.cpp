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
class Solution{
    public:
    int maxD;
    int solve(TreeNode* root)
    {
        if (root == nullptr)
            return 0;

       int rd, ld;
       ld = solve(root->left);
       rd = solve(root->right);

       if (ld + rd > maxD)
           maxD= ld + rd;
       return 1 + max(ld, rd);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        maxD= 0;
        solve(root);
        return maxD;
    }
};