
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int k = q.size();
            long s=0;
            for(int i=0;i<k;i++){
                TreeNode*curr = q.front();
                q.pop();
                s+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back((double)s/k);
        }
        return ans;
    }
};