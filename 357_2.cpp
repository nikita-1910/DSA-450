#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

bool helper(int node, int par, vector<bool>&vis, vector<int>&parent){
    vis[node]=true;
    for(auto it:adj[node]){
        if(it==par){
            continue;
        }
        if(vis[it]){
            return true;
        }
        parent[it]=node;
        if(helper(it, parent[it], vis, parent)){
            return true;
        }
    }
    return false;
}

bool isCycle(int n){
    vector<bool>vis(n, 0);
    vector<int>parent(n, -1);
    for(int i=0; i<n; i++){
        if(!vis[i] && helper(i, parent[i], vis, parent)){
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
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
