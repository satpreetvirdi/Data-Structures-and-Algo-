#include<bits/stdc++.h>
using namespace std;

class Solution{
    void dfs(int node, vector<int>&vis, vector<int> adj[], vector<int>&storeDfs){
        vis[node] = 1;
        storeDfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it, vis, adj, storeDfs);
            }
        }
    }
    public:
    vector<int>dfsOfGraph(int V , vector<int>adj[]){
        vector<int> storeDfs;
        vector<int> vis(V+1 ,0);
        for(int i=1;i<=V;i++){
            if(!vis[i]){
                dfs(i, vis,adj,storeDfs);
            }
        }
    }
}