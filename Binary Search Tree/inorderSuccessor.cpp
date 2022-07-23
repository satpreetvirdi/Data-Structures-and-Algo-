#include<iostream>
using namespace std;

class Solution {
    public :
        TreeNode* inorderSuccessor(TreeNode* root , TreeNode* p){
            TreeNode* successor = NULL;
            while(root != NULL){
              if(root->val <= p) {
                root = root->right;
              }else{
                successor = root->val;
                root= root->left;
            }
        }
        return successor;
}
};