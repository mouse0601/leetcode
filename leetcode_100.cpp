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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr)
        {
            return true;
        }
        //注意对空指针的引用！
        if(p != nullptr && q != nullptr && p->val == q->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        return false;
    }
};
