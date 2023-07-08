#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>&vis, vector<int>adj[]){
    vis[node]=1;
    cout<<node<<" ";
    for(auto it:adj[node]){
        if(vis[it]==0){
            dfs(it, vis, adj);
        }
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>adj[n], vis(n, 0);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, vis, adj);
}