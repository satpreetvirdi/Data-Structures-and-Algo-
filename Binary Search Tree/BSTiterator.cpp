
class BSTIterator {
    stack<TreeNode*> myStack;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
      bool hasNext() {
        return !myStack.empty();
    }
    int next() {
        TreeNode* tmpnode = myStack.top();
        myStack.pop();
        pushAll(tmpnode->right);
        return tmpnode->val;
    }
    
  
private:
    void pushAll(TreeNode* node){
        for(; node!=NULL; myStack.push(node), node= node->left);
    }
};

