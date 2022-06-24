#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution{
    vector<int> bottomView(Node* root){
        vector<int> ans;
        if(root == NULL) return ans;
        map<int , int > mpp; 
        queue<pair<Node* ,int>> q;
        q.push({root , 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int level = it.second;
            mpp[level] = node->val;
            if(node->left!= NULL){
                q.push({node->left , level-1});
            }
            if(node->right!= NULL){
                q.push({node->right , level+1});
            }
        }
        for(auto it : mpp){
            ans.push_back(it.second);
        }

    }

}