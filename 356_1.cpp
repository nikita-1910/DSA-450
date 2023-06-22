#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

int main(){
    int n, m;
    cin>>n>>m;
    adj.resize(n);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<int>indegree(n, 0);
    for(int i=0; i<n; i++){
        for(int it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i=0; i<n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        count++;
        for(int it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    if(count!=n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}