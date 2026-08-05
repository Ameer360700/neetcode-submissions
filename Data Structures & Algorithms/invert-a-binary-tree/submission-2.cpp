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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==nullptr)
        {
            return root;
        }
        TreeNode*newroot=new TreeNode(root->val);
        stack<pair<TreeNode*,TreeNode*>>stk;
       
        stk.push({root,newroot});
        
        TreeNode*newtemp=newroot;
        while(stk.empty()==0)
        {
            int levelsize=stk.size();
            for(int i=0;i<levelsize;i++)
            {
                auto[temp,newNode]=stk.top();
                stk.pop();
                if(temp->left!=nullptr)
                {
                    newNode->right=new TreeNode(temp->left->val);
                    stk.push({temp->left,newNode->right});
                }
                if(temp->right!=nullptr)
                {
                    newNode->left=new TreeNode(temp->right->val);
                    stk.push({temp->right,newNode->left});
                }
                
            }
        }
        return newroot;

    }
};
