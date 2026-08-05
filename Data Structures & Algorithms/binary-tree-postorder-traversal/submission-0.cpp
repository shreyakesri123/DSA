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
    vector<int> postorderTraversal(TreeNode* root) {
         stack<TreeNode*>s;

        if(root==NULL) return {};

        s.push(root);

        vector<int>ans;
        while(!s.empty())
        {
            TreeNode*a=s.top();
            s.pop();
            ans.push_back(a->val);
            if(a->left)s.push(a->left);
            if(a->right)s.push(a->right);

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};