#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int adj[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adj[i][j]=0;
        }
    }
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;// for directed graph comment this statement
    }
    cout<<"The required graph is"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}