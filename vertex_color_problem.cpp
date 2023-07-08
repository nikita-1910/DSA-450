#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

void vertexCover(int n, vector<vector<int>>adj){
    vector<bool>vis(n, 0);
    for(int i=0; i<n; i++){
        if(vis[i]==false){
            for(auto it: adj[i]){
                int x=it;
                if(vis[x]==false){
                    vis[x]=true;
                    vis[i]=true;
                    break;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        if(vis[i]){
            cout<<i<<" ";
        }
    }
    
}

int main(){
    int n, m;
    cin>>n>>m;
    adj.resize(n);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);;
    }
    vertexCover(n, adj);
}