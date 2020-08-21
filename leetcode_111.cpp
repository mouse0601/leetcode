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
    
    int minDepth(TreeNode* root) {
        //深度优先遍历
        /*if(root == NULL)
            return 0;
        int min_dept = INT_MAX;
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        if(root->left)
        {
            min_dept = min(minDepth(root->left),min_dept);
        }
        if(root->right)
        {
            min_dept = min(minDepth(root->right),min_dept);
        }
        return min_dept+1;*/

        //广度优先遍历
        if(root == nullptr)
            return 0;
        queue<TreeNode*> que;
        int depth = 0;
        TreeNode *p = root;
        que.push(p);
        while(!que.empty())
        {
            depth++;
            int size = que.size();
            for(int i = 0;i < size;i++)
            {
                p = que.front();
                if(p->left != nullptr)
                {
                    que.push(p->left);
                }

                if(p->right != nullptr)
                {
                    que.push(p->right);
                }
                if(p->left == nullptr && p->right == nullptr)
                {
                    return depth;
                }
                que.pop();
            }
        } 
        return depth;
    }
};
