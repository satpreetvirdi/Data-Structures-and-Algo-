#include<iostream>
using namespace std;

class Solution {
    public :
        TreeNode* inorderSuccessor(TreeNode* root , TreeNode* p){
            int successor = NULL;
            while(root != NULL){
              if(root->val <= p->val) {
                root = root->right;
              }else{
                successor = root->val;
                root= root->left;
            }
        }
        return successor;
}
};