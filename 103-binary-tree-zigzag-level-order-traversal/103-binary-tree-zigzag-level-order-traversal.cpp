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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vvi;
        vector<int> vi;
        if(root==NULL)
            return vvi;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vi.push_back(root->val);
        vvi.push_back(vi);
        vi.clear();

        while(!q.empty())
        {
            TreeNode* front=q.front();
            q.pop();
            if(front==NULL)
            {
                if(q.empty())
                {
                    return vvi;
                }
                if(vvi.size()%2==1)//odd
                {
                    reverse(vi.begin(),vi.end());
                }
                vvi.push_back(vi);
                vi.clear();
                q.push(NULL);
                
            }
             else{
                if(front->left)
                {
                    q.push(front->left);
                    vi.push_back(front->left->val);
                }
                if(front->right)
                {
                    q.push(front->right);
                    vi.push_back(front->right->val);
                }
             }
        }
        
        return vvi;
    }
};