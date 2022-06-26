
class Solution {
public:
    bool checkTree(TreeNode* root) {
        int sum = root->val;
        if(root->left->val + root->right->val == sum) return true;
        return false;
    }
};