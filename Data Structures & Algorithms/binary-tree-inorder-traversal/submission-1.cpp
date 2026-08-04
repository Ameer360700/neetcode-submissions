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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int>res;
        stack<TreeNode*>dfs;
        TreeNode* temp=root;
        while(temp != nullptr || dfs.empty()==0)
        {
            while(temp!=nullptr)
            {
                dfs.push(temp);
                temp=temp->left;
            }
            temp=dfs.top();
            dfs.pop();
            res.push_back(temp->val);
            temp=temp->right;
    
        }
        return res;
    }
};