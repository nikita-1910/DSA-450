#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;

int main(){
    int n, m;
    cin>>n>>m;
    adj.resize(n);
    vector<int>res(n, -1);
    vector<bool>available(n, 0);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);;
    }
    res[0]=0;
    for(int i=1; i<n; i++){
        vector<int> :: iterator it;
        for(it=adj[i].begin(); it!=adj[i].end(); it++){
            if(res[*it]!=-1){
                available[res[*it]]=true;
            }
        }
        int j;
        for(j=0; j<n; j++){
            if(available[j]==false){
                break;
            }
        }
        res[i]=j;
        for(it=adj[i].begin(); it!=adj[i].end(); it++){
            if(res[*it]!=-1){
                available[res[*it]]=false;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<"vertex "<<i<<"---> Colour "<<res[i]<<endl;
    }
}