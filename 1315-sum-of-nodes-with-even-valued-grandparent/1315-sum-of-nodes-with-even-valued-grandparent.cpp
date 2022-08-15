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
class Solution {
public:
    int sum=0;
    void sumEvenGrandparent(TreeNode* root,int p,int gp) {
        if(root==NULL)
            return;
        sumEvenGrandparent(root->left,root->val%2,p);
        sumEvenGrandparent(root->right,root->val%2,p);
        if(gp==0)
            sum+=root->val; 
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
            return 0;
        sumEvenGrandparent(root,1,1);
        return sum;
    }
};