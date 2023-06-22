#include<bits/stdc++.h>
using namespace std;

void topoSort(int N, vector<int>adj[]){
    queue<int>q;
    vector<int>indegree(N, 0);
    for(int i=0; i<N; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    for(int i=0; i<N; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    topoSort(n, adj);
}


