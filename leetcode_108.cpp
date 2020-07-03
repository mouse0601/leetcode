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
    TreeNode* bulid_tree(vector<int> num,int left,int right)
    {
        //½¨Á¢¶þ²æÊ÷
        if(left > right)
            return NULL;
        int mid = (left + right) / 2;
        TreeNode* root = new TreeNode;
        root->val = num[mid];
        root->left = bulid_tree(num,left,mid-1);
        root->right = bulid_tree(num,mid+1,right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bulid_tree(nums,0,nums.size() - 1);
    }
};
