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
TreeNode*f(int ps,int pe,vector<int>&pre, int is,int ie, vector<int>&in,unordered_map<int,int>&mp)
{
    if(ps>pe || is>ie) return NULL;
    TreeNode*a= new TreeNode(pre[ps]);
    int iroot= mp[a->val];
    int l= iroot-is;

    a->left= f(ps+1,ps+l,pre, is,iroot-1,in,mp);
    a->right= f(ps+l+1,pe,pre,iroot+1,ie,in,mp);

    return a;
}
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int>mp;
        for(int i=0;i<in.size();i++)
        {
          mp[in[i]]=i;
        }
        return f(0,pre.size()-1,pre, 0,in.size()-1,in,mp);
    }
};
