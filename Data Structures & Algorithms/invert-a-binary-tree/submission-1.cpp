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

    if (root == nullptr)
    {
        return root;
    }
    TreeNode* newroot = new TreeNode(root->val);

    stack<pair<TreeNode*, TreeNode*>> stk;   // FIX: pair up (origNode, newNode) in one stack
    stk.push({root, newroot});

    while (stk.empty() == 0)
    {
        int levelsize = stk.size();   // note: not really "levels" anymore with a stack — see below
        for (int i = 0; i < levelsize; i++)
        {
            auto [temp, newNode] = stk.top();   // FIX: pop BOTH the original node and its paired new node
            stk.pop();

            if (temp->left != nullptr)
            {
                newNode->right = new TreeNode(temp->left->val);   // FIX: swapped — left feeds into right
                stk.push({temp->left, newNode->right});           // FIX: push the pair together
            }
            if (temp->right != nullptr)
            {
                newNode->left = new TreeNode(temp->right->val);   // FIX: swapped — right feeds into left
                stk.push({temp->right, newNode->left});
            }
        }
    }
    return newroot;
}
};
