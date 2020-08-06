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
        TreeNode *per,*p;//per�����һ�����ʵĽ��
        stack<TreeNode*> stacktree;
        p = root;
        while(p)
        {
            stacktree.push(p);
            per = p;
            p = p->left;

        }
        //������ջ��Ԫ��ʱ�����ж��������Ƿ���ڣ�������ڿ���һ����Ƿ�������ҽڵ�
        //Ҫ�ȷ����ҽڵ��ٷ��ʸýڵ�
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
