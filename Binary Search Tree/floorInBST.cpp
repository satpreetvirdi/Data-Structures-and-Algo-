int findFloor (TreeNode * root , int key){
    int floor;
    while(root){
        if(root->val == key){
            floor = root->val;
            return floor;
        }
        if(root->val <key){
            floor = root->val;
            root = root->right;
        }else{
            root = root->left;
        }
        return floor;
    }
}