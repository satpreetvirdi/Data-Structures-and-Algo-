#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool checkCycle(int s, vector<int>&vis, vector<int>adj[]){
        queue<pair<int,int>> q;
        vis[s] = 1;
        q.push({s,-1});
        while(!q.empty()){
            int node = q.front().first;
            int prev = q.front().second;
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] =1;
                    q.push({it,node});
                }else if(prev!= it)
                return true;
            }
        }
        return false;
    }
    public:
    bool isCycle(int V, vector<int>adj[]){
        vector<int> vis(V+1 ,0);
        for(int i=1;i<=V;i++){
            if(!vis[i]){
           if (checkCycle( i , vis, adj)) return true;
            }
        }
    }
};