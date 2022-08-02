#include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> rank;

void makeSet(){
    for(int i=0;i<=n;i++){
        parent[i] = 1;
        rank[i]=0;

    }
}
int findParent(int node){
    if(node == parent[node]){
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void union(int u,int v){
    u= findParent(u);
    v= findParent(v);
    if(rank[u] < rank[v]){
        parent[u] = v;
    }else if(rank[v]<rank[u]){
        parent[v] = u;
    } else{
        parent[v] = u;
        rank[u]++;
    } 
}

void main(){
    makeSet();
    int m;
    cin>>m;
    while(m--){
        int u ,v;
        union(u,v);

    }
    if(findParent(2)!= findParent(3)){
        cout<< "Different Component";
    }else{
        cout<< "Same";
    }
}
