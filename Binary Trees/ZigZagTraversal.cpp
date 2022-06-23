
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) return result;
        
        queue<TreeNode*> q;
        bool leftToRight = true;
        
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> row(size);
            
            for(int i=0 ; i<size ; i++){
                TreeNode* node = q.front();
                q.pop();
                
                int idx = (leftToRight) ? i : (size-1-i);
                
                row[idx] = node->val;
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;
    }
};