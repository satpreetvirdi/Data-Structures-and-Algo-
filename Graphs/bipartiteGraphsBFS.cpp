#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool bipartiteBFS(int node, vector<int>adj[], vector<int> &vis){
        queue<int> q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int src = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(vis[it] == -1){
                    vis[it] = 1 - vis[src];
                    q.push(vis[it]);
                }else if(vis[it] == vis[src]) return false;
            }
        }
        return true;
    }
    public:
        bool checkBipartite(int n, vector<int> adj[]){
            vector<int> vis(n, -1);
            for(int i=0; i<=n;i++){
                if(vis[i] == -1){
                    if(!bipartiteBFS(i, adj, vis)) return false;    
                }
            }
            return true;
        }

}