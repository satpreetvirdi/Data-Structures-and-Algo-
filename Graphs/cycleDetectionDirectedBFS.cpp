#include<bits/stdc++.h>
using namespace std;
// Topological Sort using BFS  == Kahns Algorithm

class Solution{
    public:
   bool topoSort(int n, vector<int>adj[]){
        vector<int>indegree(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int count;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(count==n) return true;
        return false;
    }

};