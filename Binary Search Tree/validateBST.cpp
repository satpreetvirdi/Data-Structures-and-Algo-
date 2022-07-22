
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validateBST(root , LONG_MIN, LONG_MAX);
    }
    bool validateBST(TreeNode* root , long minval, long maxval){
        if(root == NULL) return true;
        if(root->val >= maxval || root->val <= minval) return false;
        return validateBST(root->left,  minval, root->val) 
            && validateBST(root->right, root->val ,  maxval);
    }
    
};