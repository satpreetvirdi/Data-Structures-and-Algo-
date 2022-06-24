#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution{

    vector<int> TopView(TreeNode* root){
        vector<int> ans;
        if(root == NULL) return ans;
        map<int ,int> mpp;
        queue<pair<TreeNode* , int>> q;
        q.push({root , 0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int level = it.second;
            if(mpp.find(level) == mpp.end()) mpp[level] = node->val;

            if(node->left){
                q.push({node->left , level-1});
            }
            if(node->right) {
                q.push({node->right , level+1});
            }

        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }

}