#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Note : 1.Done using TOPO Sort
void topoSort(int node,vector<int>&vis,stack<int>&st,vector<pair<int,int>>adj[]){
    vis[node]=1;
    for(auto it : adj[node]){
        if(!vis[it.first]){
            topoSort(it.first,vis,st,adj[]);
        }
    }
    st.push(node);
}

void shortestPath(int src, int n,vector<pair<int,int>> adj[]){
    vector<int>vis(n,0);
    stack<int>st;
    for(int i=0;i>n;i++){
        if(!vis[i]){
            topoSort(i,vis,st,adj);
        }
    }
    int dist[n];
    for(int i=0;i<n;i++){
        dist[i]= 1e9;
        dist[src] =0;
    }
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(dist[node] != INFINITY){
            for(auto it : adj[node]){
                if(dist[node] + it.second < dist[it.first]){
                    dist[it.first] = dist[node] + it.second;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        (dist[i] == 1e9)? cout<< "INF" : cout<<dist[i]<< ""; 
    }
}


int main(){ 
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<n;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }
    shortestPath(0,n,adj);

}