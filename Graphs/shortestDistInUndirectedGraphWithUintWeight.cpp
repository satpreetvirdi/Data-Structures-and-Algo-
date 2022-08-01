#include<bits/stdc++.h>
using namespace std;

// BFS is used
class Solution{

    public:
    void shortestDist(int adj[], int n, int src){
        int dist[n];
        for(int i =0;i<n;i++){
            dist[i] = INT_MAX;
        }
        queue<int>q;
        dist[src] =0;
        q.push(src);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(dist[node]+1 < dist[it]){
                    dist[it] = dist[node];
                    q.push(it);
                }
            }
        }
        for(auto it : dist){
            cout<<it<<endl;
        }
    }
};