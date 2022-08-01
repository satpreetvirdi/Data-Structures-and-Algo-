#include<bits/stdc++.h>
using namespace std;
// Shortest path in undirected graph with weight (not unit)

int main(){
    int n ,m ,source;
    cin>>n>>m;
    vector<pair<int,int>> g[n+1];
    int a, b,wt;
    for(int i=0;i<m;i++){
        g[a].push_back(make_pair(b,wt));
        g[b].push_back(make_pair(a,wt));
    }
    cin>>source;

    // Dijkstra Algo begins from here
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(n+1, INT_MAX);
    dist[source] = 0;
    pq.push(make_pair(0,source));
    
    while(!pq.empty()){
        int prevDist = pq.top().first;
        int prevNode = pq.top().second;
        pq.pop();

        for(auto it : g[prevNode]){
            int nextNode = it.first;
            int nextDist = it.second;
            if(dist[nextNode] > nextDist + dist[prevNode]){
                dist[nextNode] = nextDist + dist[prevNode];
                pq.push(make_pair(dist[nextNode], nextNode));
            }   
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<endl;
    }
}