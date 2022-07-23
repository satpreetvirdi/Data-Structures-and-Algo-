class BSTNode{      // new node class to store extra information with respect to BST
public:
    int maxNode, minNode, maxSum;
    
    BSTNode(int maxNode, int minNode, int maxSum){      // parameterized constructor
        this->maxNode = maxNode;    // maximum value among nodes seen till BSTNode
        this->minNode = minNode;    // minimum value among nodes seen till BSTNode
        this->maxSum = maxSum;      // sum of all the nodes forming BST considering BSTNode as root
    }
};

class Solution {
public:
    int ans = INT_MIN;
    BSTNode helper(TreeNode* root){
        // an empty tree is a BST with maxSum 0
        if(!root){
            return BSTNode(INT_MIN, INT_MAX, 0);
        }
        
        // get values from the left and right subtree of current tree i.e. post-order traversal
        auto left = helper(root->left);
        auto right = helper(root->right);
        
        // if current node is greater than max in left and is smaller than min in right, then it is a BST
        if(left.maxNode < root->val && root->val < right.minNode){
            // it is a BST, so the parent's maxNode, minNode, maxSum will get updated with max in right, min in left and currSum including root respectively
            int currSum = left.maxSum + right.maxSum + root->val;
            ans = max(ans, currSum);     // keeping track of the maximum currSum
            return BSTNode(max(root->val, right.maxNode), min(root->val, left.minNode), currSum);
        }
        
        // otherwise return [-INF, INF] so that parent can't be a valid BST. Here we still keep maxSum = max(left.maxSum, right.maxSum) to keep track of previous valid BST that found before current invalid BST
        return BSTNode(INT_MAX, INT_MIN, max(left.maxSum, right.maxSum));
    }
    
    int maxSumBST(TreeNode* root) {
        helper(root);  // The final maxSum value will be our answer
        
        return (ans>0) ? ans : 0;   // handling the case when all the nodes are negative, then we have to return empty BST
    }
};