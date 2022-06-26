
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 0;
        queue<pair<TreeNode* , int>> q;
        q.push({root , 0 });
        while(!q.empty()){
            int n = q.size();
            int min = q.front().second;
            int first,last;
            for(int i=0 ; i<n ; ++i){
                long long curr_id = q.front().second - min ; 
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = curr_id;
                if(i== n-1) last = curr_id;
                if(node->left!=NULL) {
                    q.push({node->left , curr_id*2 +1});
                }
                if(node->right!=NULL){
                    q.push({node->right, curr_id*2+2});
                }
            }
            ans = max(ans , last-first+1);
        }
        return ans;
    }
};