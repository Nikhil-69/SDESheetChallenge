/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
            while (q.size() > 0)
            {
                TreeNode* temp = q.front();
                q.pop();
                if (temp == NULL)
                {
                    if (q.size() == 0)
                        break;
                    vvi.push_back(vi);
                    vi.clear();
                    q.push(NULL);
                    continue;
                }
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                    vi.push_back(temp->left->val);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                    vi.push_back(temp->right->val);
                }
            }
            return vvi;
        }
    vector<int> rightSideView(TreeNode *root) {
        // if(root==NULL)
        //     return{};
        vector<vector<int>> vvi=levelOrder(root);
        vector<int> v;
        for(int i=0;i<vvi.size();i++){
            v.push_back(vvi[i][vvi[i].size()-1]);
        }
        return v;
    }
};