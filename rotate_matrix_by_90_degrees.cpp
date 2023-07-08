//Rotate matrix by 90 degrees
#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>>arr, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
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
    rotateArray(v, c, r);
}

