#include<bits/stdc++.h>
using namespace std;
// Flatten a binary Tree into Linked List

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int maxPathSumUtil(Node* root , int&ans){
    if(root == NULL) return 0;
    
    int left = maxPathSumUtil(root->left,  ans);
    int right = maxPathSumUtil(root->right , ans);

    int maxSum = max(max(root->data , root->data + left+ right), max(root->data + left , root->data+right));
     ans = max(ans, maxSum);
    int singlePathSum = max(root->data,max(root->data+left, root->data+right));
    return singlePathSum;
}


int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    cout<< maxPathSum(root);    

    return 0;
}

