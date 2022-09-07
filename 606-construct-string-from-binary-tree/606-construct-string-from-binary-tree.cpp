/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        string tree2str(TreeNode *root, string &s)
        {
            if (root == NULL)
                return s;
            s += to_string(root->val);
            if(root->left==NULL && root->right==NULL)
                return s;
            // if (root->left != NULL)
            // {
                s += '(';
                tree2str(root->left, s);
                s += ')';
            // }
            if (root->right != NULL)
            {
                s += '(';
                tree2str(root->right, s);
                s += ')';
            }
            return s;
        }
    string tree2str(TreeNode *root)
    {
        string s;

        return tree2str(root, s);
        string ans;
        // for (int i = 0; i < s.size() - 1; i++)
        // {
        //     if (s[i] == '(' && s[i + 1] == ')')
        //     {
        //         i++;
        //         continue;
        //     }
        //     else
        //         ans += s[i];
        // }
    }
};