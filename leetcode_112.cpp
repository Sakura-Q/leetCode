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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::queue<TreeNode*> q;
		vector<vector<int>> result;
		if(root==NULL)
			return result;
		q.push(root);
		while(!q.empty()){
			int s=q.size();
			vector<int> ss;
			TreeNode* p;
			for(int i=0;i<s;i++){
				p=q.front();
				q.pop();
				ss.push_back(p->val);
				if(p->left)
					q.push(p->left);
				if(p->right)
					q.push(p->right);
			}
			result.push_back(ss);
		}
		return result;
	}
};
