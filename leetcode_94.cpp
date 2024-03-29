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
    vector<int> re;
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
		if(root==NULL)
			return result;
		result=inorder(root,result);
		return result;
    }
	private:
    	
	vector<int> inorder(TreeNode* root,vector<int> result){
	    re=result;
		if(root!=NULL){
			inorder(root->left,re);
			re.push_back(root->val);
			inorder(root->right,re);
		}
		return re;
	}
};