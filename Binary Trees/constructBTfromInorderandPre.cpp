
class Solution {
public:
    TreeNode* buildTree(vector<int>& preOrder, vector<int>& inOrder) {
        map<int ,int> inMap;
        for(int i =0; i< inOrder.size(); ++i){
            inMap[inOrder[i]] = i;
        }
        TreeNode* root = buildTree(preOrder,0 , preOrder.size()-1,inOrder, 0,inOrder.size() -1 , inMap);
        return root;   
    }
    TreeNode* buildTree(vector<int>& preOrder, int preStart, int preEnd, vector<int>&inOrder , int inStart, int inEnd, map<int, int> &inMap){
        if(preStart > preEnd || inStart >inEnd) return NULL;
        TreeNode* root = new TreeNode(preOrder[preStart]);
        int inRoot = inMap[root->val];
        int numsLeft = inRoot - inStart;
        
        root->left= buildTree(preOrder , preStart+1 , preStart+ numsLeft, inOrder , inStart ,inRoot-1 ,inMap);
        root->right = buildTree(preOrder, preStart + numsLeft + 1, preEnd,inOrder, inRoot +1 ,inEnd, inMap);
        return root;
    }
};  