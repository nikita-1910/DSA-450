#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

bool isSafe(int x, vector<vector<int>>adj, vector<int>color, int i, int v){
    for(int j=0; j<v; j++){
        if(adj[x][j] && i==color[j]){
            return false;
        }
    }
    return true;
}

bool helper(vector<vector<int>>adj, int m, vector<int>color, int x, int v){
    if(x==v){
        return true;
    }
    for(int i=1; i<=m; i++){
        if(isSafe(x, adj, color, i, v)){
            color[x]=i;
            if(helper(adj, m, color, x+1, v)==true){
                return true;
            }
            color[x]=0;
        }
    }
    return false;
}

bool graphColoring(vector<vector<int>>adj, int m, int v, int e){
    vector<int>color(v, 0);
    if(helper(adj, m, color, 0, v)==false){
        cout<<"Solution doesn't exist";
        return false;
    }
    cout<<"Solution exists: "<< "Following are assigned colors"<<endl;
    for(int i=0; i<v; i++){
        cout<<" "<<color[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int v, e, m;
    cin>>v>>e>>m;
    adj.resize(v);
    for(int i=0; i<e; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);;
    }
    graphColoring(adj, m, v, e);
}