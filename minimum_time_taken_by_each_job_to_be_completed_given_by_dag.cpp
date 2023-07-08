#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int>indegree(n, 0), job(n, 0);
    adj.resize(n);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;
    }
    queue<int>q;
    for(int i=1; i<=n; i++){
        if(indegree[i]==0){
            q.push(i);
            job[i]=1;
        }
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                job[it]=job[node]+1;
                q.push(it);
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<<job[i]<<" ";
    }
}