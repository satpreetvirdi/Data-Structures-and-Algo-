#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool checkCycle(int node,vector<int>adj[],vector<int>&vis,vector<int>&dfsVis){
        vis[node] = 1;
        dfsVis[node]=1;
        for(auto it : adj[node]){
            if(vis[it]== 0){
                if (checkCycle(it,adj[],vis,dfsVis)) return true;
            }else if (vis[it] == 1){
                return true;
            }
        }
        dfsVis[node] = 0;
        return false; 
    }
    public:
        bool isCycle(int n, vector<int> adj[]){
            vector<int> vis(n,0);
            vector<int> dfsVis(n,0);
            for(int i=0;i<n;i++){
                if(!vis[i]){
                    if(checkCycle(i, adj[],vis,dfsVis)) return true;
                }
            }
            return false;
        }
}