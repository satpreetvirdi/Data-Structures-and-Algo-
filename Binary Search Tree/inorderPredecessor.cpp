#include<iostream>
using namespace std;

class Solution {
    public :
        TreeNode* inorderSuccessor(TreeNode* root , TreeNode* p){
            int predecessor = NULL;
            while(root != NULL){
              if(  root->val <= p->val ) {
                predecessor = root->val;
                root = root->right;

              }else{
               
                root= root->left;
            }
        }
        return predecessor;
}
};