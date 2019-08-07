/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL){
           return  result;
        }
        preorder(root,result);
        return result;
    }
private:
   void preorder(TreeNode* root,vector<int> &rr){
        if(root!=NULL){
            rr.push_back(root->val);
            preorder(root->left,rr);
            preorder(root->right,rr);
        }
        
    }
};