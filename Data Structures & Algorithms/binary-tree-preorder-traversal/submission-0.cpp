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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>res;
        stack<TreeNode*>stk;
        TreeNode*temp=root;
        while(temp!=nullptr || stk.empty()==0)
        {
              while(temp!=nullptr)
              {
                  stk.push(temp);
                  res.push_back(temp->val);
                  temp=temp->left;
              }
              temp=stk.top();
              stk.pop();
              temp=temp->right;

        }
        return res;
        
    }
};