#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int node, vector<int>&vis, stack<int>&st, vector<int>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            findTopoSort(it, vis, st, adj);
        }
    }
    st.push(node);
}
void topoSort(int N, vector<int>adj[]){
    stack<int>st;
    vector<int>vis(N, 0);
    for(int i=0; i<N;i++){
        if(vis[i]==0)
        findTopoSort(i, vis, st, adj);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
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
