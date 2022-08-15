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
        int maxDepth(TreeNode *root)
        {
            if (root == NULL)
                return 0;
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        }
        int sum_at_height(TreeNode *root,int h)
        {
            if(root==NULL)
                return 0;
            if(h==1)
                return root->val;
            int leftSum=sum_at_height(root->left,h-1);
            int rightSum=sum_at_height(root->right,h-1);
            return leftSum+rightSum;
            
        }
    int deepestLeavesSum(TreeNode *root)
    {
        int h=maxDepth(root);
        return sum_at_height(root,h);
    }
};