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
bool f(TreeNode* a, TreeNode* b){
         if(a==NULL && b==NULL)return true;
         if(!a || !b) return false;
         if(a->val!=b->val) return false;

         return f(a->left,b->left) && f(a->right,b->right);
}
    bool isSubtree(TreeNode* a, TreeNode* b) {
         
         if(a==NULL && b==NULL)return true;
         if(!a || !b) return false;
         if(f(a,b)) return true;

         return isSubtree(a->left,b) || isSubtree(a->right,b);
        
    }
};
