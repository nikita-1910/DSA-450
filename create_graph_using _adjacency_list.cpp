#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);//comment this statement for directed graph
    }
    for(int i=0; i<n; i++){
        cout<<i;
        for(auto x:adj[i]){
            cout<<"->"<<x;
        }
        cout<<endl;
    }
}