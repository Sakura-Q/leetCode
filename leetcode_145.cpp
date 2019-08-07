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
    void postorder(TreeNode* root,vector<int> &result){
		if(root==NULL)
			return ;
		postorder(root->left,result);
		postorder(root->right,result);
		result=root.push_back(root->val);
	}
	
	vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
		if(root==NULL)
			return result;
		postorder(root,result);
		return result;
    }
};