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
    void funtion(TreeNode*root,vector<int> &ans)
    {
        if(root == nullptr)
        {
            return;
        }
        funtion(root->left,ans);
        ans.push_back(root->val);
        funtion(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        //递归算法
        /*vector<int> tree;
        if(root == nullptr)
        {
            return tree;
        }
        funtion(root,tree);
        return tree;*/
        
		//遍历方法 
        vector<int> ans;
        stack<TreeNode*> tree_stack;
        TreeNode* p = root;
        while(p || !tree_stack.empty())
        {
            if(p)
            {
                tree_stack.push(p);
                p = p->left;
            }
            else{
                p = tree_stack.top();
                tree_stack.pop();
                ans.push_back(p->val);
                p = p->right;
            }
        }
        return ans;
    }
};
