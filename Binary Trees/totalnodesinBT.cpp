
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        
        int lh = leftHeight(root);
        int rh = rightHeight(root);
        
        if(lh == rh ) return (1<<lh) -1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
        
    }
    
    int leftHeight(TreeNode* node){
        int hei =0;
        while(node){
            hei++;
            node= node->left;
        }
        return hei;
    }
     int rightHeight(TreeNode* node){
        int hei =0;
        while(node){
            hei++;
            node= node->right;
        }
        return hei;
    }
};