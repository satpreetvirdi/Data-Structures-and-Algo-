#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool bipartiteDFS(int node, vector<int>&color, vector<int> adj[]){
        if(color[node] == -1) color[node]=1;
        for(auto it : adj[node]){
            if(color[it]== -1){
                color[it] = 1 - color[node];
                if(bipartiteDFS(it, color, adj[])) return true;;
            }else if(color[it] == color[node]) return false;
        }
        return true;
    }
    public:
    bool checkBipartiteDFS(int n , vector<int>adj[]){
        vector<int> color(n+1, -1);
        for(int i=0; i<=n; i++){
            if(color[i] == -1){
                if(bipartiteDFS(i,color,adj[])) return true;
            }
        }
        return false;
    }
};