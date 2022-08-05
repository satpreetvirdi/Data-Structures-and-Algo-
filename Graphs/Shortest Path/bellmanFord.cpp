#include<bits/stdc++.h>
using namespace std;
// TC- O(N-1)*O(E);
struct node{
    int u,v,wt;
    node(int first ,int second,int weight){
        u=first;
        v=second;
        wt=weight;
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<node>edges;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }
    int src;
    cin>>src;
    int inf = 1000000000;
    vector<int> dist(n,0);
    dist[src] =0;

    for(int i=0;i<=n-1;i++){
        for(auto it :edges){
            if(dist[it.u] + it.wt < dist[it.v]){
                dist[it.v] = dist[it.v] + it.wt;
            }
        }
    }
    int fl=0;
    for(auto it :edges){
        if(dist[it.u] + it.wt < dist[it.v]){
            cout<< " Negative Cycle"<<endl;
            fl=1;
            break;
        }
    }
    if(!fl){
        for(int i=0;i<n;i++){
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
    return 0;
}