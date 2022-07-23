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
class hdpair{
    public:
    int h,d;
};
class Solution {
public: 
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int cb1=height(root->left);
        int cb2=height(root->right);
        return max(cb1,cb2)+1;
    }
    hdpair diameter(TreeNode* root){
        hdpair ans;
        if(root==NULL){
            ans.h=ans.d=0;
            return ans;
        }
        hdpair LT=diameter(root->left);
        hdpair RT=diameter(root->right);
        int d1=LT.h+RT.h;
        int d2=LT.d;
        int d3=RT.d;
        ans.d= max(d1,max(d2,d3));
        ans.h= max(LT.h,RT.h)+1;
        return ans;       
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).d;
    }
};