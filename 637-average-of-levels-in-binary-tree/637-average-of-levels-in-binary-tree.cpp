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
    double average(vector<int> vi)
    {
        double avg=0.0;
        for(int i=0;i<vi.size();i++)
        avg+=(1.0)*vi[i];
        return avg/vi.size();
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<int> vi;
        vector<double> vd;
        if(root==NULL)
            return vd;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vi.push_back(root->val);
        vd.push_back(average(vi));
        vi.clear();
        while(!q.empty())
        {
            TreeNode* front=q.front();
            q.pop();
            if(front==NULL){
                if(q.empty())
                {
                    return vd;
                }
                vd.push_back(average(vi));
                vi.clear();
                q.push(NULL);
            }
            
            else{
            if(front->left)
            {
                q.push(front->left);
                vi.push_back(front->left->val);
            }
            if(front->right){
                q.push(front->right);
                vi.push_back(front->right->val);
            }
        }
    }
        
       return vd;
    }
};