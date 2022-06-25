 bool preOrder(TreeNode* root , vector<int> &ans , int k){
     if(!root) return false;
    if(root->val == k || preOrder(root->left, ans ,k) || preOrder(root->right, ans, k)) {
        ans.push_back(root->val);
        return true;
    } 
    return false;
      
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    preOrder(A , ans ,B);
    reverse(ans.begin() , ans.end());
    return ans;
}