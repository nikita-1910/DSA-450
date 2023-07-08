#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

bool bfs(int node, vector<bool>& vis, int n){
    vector<int>parent(n, -1);
    queue<int>q;
    vis[node]=true;
    q.push(node);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int it:adj[u]){
            if(vis[it]==0){
                vis[it]=true;
                q.push(it);
                parent[it]=u;
                continue;
            }
            if(parent[u]!=it){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int n){
    vector<bool>vis(n, 0);
    for(int i=0; i<n; i++){
        if(!vis[i] && bfs(i, vis, n)){
            return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    adj.resize(n);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        if(x==y){
            cout<<"YES";
        }
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(isCycle(n)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}