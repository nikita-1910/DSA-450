//Common elements in all rows of a given matrix
#include<bits/stdc++.h>
using namespace std;
void commonElement(vector<vector<int>>&arr, int n, int m){
    unordered_map<int, int>mp;
    for(int j=0; j<n; j++){
        mp[arr[0][j]]=1;
    }
    for(int i=1; i<m; i++){
        for(int j=0; j<n; j++){
            if(mp[arr[i][j]]==i){
                mp[arr[i][j]]=i+1;
                if(i==m-1 && mp[arr[i][j]]==m){
                    cout<< arr[i][j] << " ";
                }
            }
        }
    }
    
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
    cout<<"Common element is ";
    commonElement(v, c, r);
}
