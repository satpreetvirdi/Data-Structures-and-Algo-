
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return build(preorder, i , INT_MAX);
    }
    TreeNode* build(vector<int>& A, int &i , int max){
        if(i == A.size() || A[i] > max) return NULL;
        TreeNode* root= new TreeNode(A[i++]);
        root->left = build(A , i , root->val);
        root->right = build(A, i , max);
        return root;
    }
};