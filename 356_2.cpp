#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

bool helper(int node, vector<bool>vis, vector<bool>instack){
    if(instack[node] || vis[node]){
        return true;
    }
    vis[node]=true;
    instack[node]=true;
    for(int it:adj[node]){
        if(helper(it, vis, instack)){
            return true;
        }
    }
    instack[node]=false;
    return false;
}

bool isCycle(int n, int m){
    vector<bool>vis(n, 0), instack(n, 0);
    for(int i=0; i<n; i++){
        if(helper(i, vis, instack)){
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
        adj[x].push_back(y);
    }
    if(isCycle(n, m)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}