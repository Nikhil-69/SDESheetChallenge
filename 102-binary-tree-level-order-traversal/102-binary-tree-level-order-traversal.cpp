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
        vector<vector < int>> levelOrder(TreeNode *root)
        {

            vector<vector < int>> vvi;
            if (root == NULL)
                return vvi;
            vector<int> vi;
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            vvi.push_back({ root->val });
            while (!q.empty())
            {
                TreeNode *front = q.front();
                q.pop();
                if (front == NULL)
                {
                    if(q.size()>0)
                    {q.push(NULL);
                    
                    vvi.push_back(vi);
                    vi.clear();}
                }
                else
                {
                    if (front->left != NULL)
                    {
                        q.push(front->left);
                        vi.push_back(front->left->val);
                    }
                    if (front->right != NULL)
                    {
                        q.push(front->right);
                        vi.push_back(front->right->val);
                    }
                }
            }
            return vvi;
        }
};