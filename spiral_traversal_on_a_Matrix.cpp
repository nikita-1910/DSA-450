//Spiral traversal on a Matrix
#include<bits/stdc++.h>
using namespace std;

vector<int> spiral_traverse(vector<vector<int>>& v, int r, int c){
    vector<int>res;
    int rS=0, rE=r-1, cS=0, cE=c-1;
    while(rS<=rE && cS<=cE){
        for(int i=cS; i<=cE; i++){
            res.push_back(v[rS][i]);
        }
        rS++;
        for(int i=rS; i<=rE; i++){
            res.push_back(v[i][cE]);
        }
        cE--;
        for(int i=cE; i>=cS; i--){
            res.push_back(v[rE][i]);
        }
        rE--;
        for(int i=rE; i>=rS; i--){
            res.push_back(v[i][cS]);
        }
        cS++;
    }
    return res;
}

int main(){
    int c, r;
    cin>>c>>r;
    vector<int>row(c);
    vector<vector<int>>v(r, row);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>v[i][j];
        }
    }
    vector<int>ans=spiral_traverse(v, r, c);
    cout<<"Spiral traversal of matrix is \n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

