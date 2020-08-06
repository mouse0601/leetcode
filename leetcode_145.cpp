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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> tree;
        TreeNode *per,*p;//per标记上一个访问的结点
        stack<TreeNode*> stacktree;
        p = root;
        while(p)
        {
            stacktree.push(p);
            per = p;
            p = p->left;

        }
        //当访问栈顶元素时，先判断右子树是否存在，如果存在看上一结点是否访问了右节点
        //要先访问右节点再访问该节点
        while(!stacktree.empty())
        {
            p = stacktree.top();
            stacktree.pop();
            if(p->right == nullptr || per == p->right)
            {
                tree.push_back(p->val);
                per = p;
            }
            else
            {
                stacktree.push(p);
                p = p->right;
                while(p)
                {
                    stacktree.push(p);
                    per = p;
                    p = p->left;
                }
            }
                
        }
        return tree;
    }
};
