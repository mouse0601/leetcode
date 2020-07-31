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
    string tree2str(TreeNode* t) {
        if(t == nullptr)
            return "";
        string ans = "";
        if(t->left == nullptr && t->right == nullptr)
        {
            return ans + to_string(t->val);
        }
        else if(t->left == nullptr && t->right != nullptr)
        {
            ans += to_string(t->val)+ "()(";
            ans += tree2str(t->right);
            ans += ")";
            return ans;
        }
        else if(t->left != nullptr && t->right == nullptr)
        {
            ans = ans + to_string(t->val) + '(';
            ans += tree2str(t->left);
            ans += ")";
            return  ans;
        }
        else if(t->left != nullptr && t->right != nullptr)
        {
            ans = ans + to_string(t->val) + '(';
            ans += tree2str(t->left);
            ans += ")(";
            ans += tree2str(t->right);
            ans += ")";
            return ans ;
        }
        return ans;
    }
};
