#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> topoSortDFS(int node ,vector<int>adj[],vector<int>&vis,stack<int>&s){
       if(!vis[node]) vis[node]=1;
       for(auto it : adj[node]){
        if(!node[it]){
            topoSortDFS(it,adj,vis,s);
        }
       }
       s.push(node);
    }
    public:
    vector<int>topoSort(int n , vector<int>adj[]){
        vector<int> vis(n,0);
        
        stack<int> s;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topoSortDFS(i,adj,vis,s);
            }
        }
        vector<int> topo;
        while(!s.empty()){
        topo.push_back(s.top());
        }
        return topo;
        
    }
};