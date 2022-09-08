/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) return {};
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                Node* temp = q.front();
                q.pop();
                for(auto it : temp->children){
                    q.push(it);
                 }
                v.push_back(temp->val);
            }
           ans.push_back(v);             
        }
       return ans; 
    }
};