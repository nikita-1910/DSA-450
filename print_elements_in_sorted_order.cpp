//Print elements in sorted order using row-column wise sorted matrix
#include<bits/stdc++.h>
using namespace std;

void sortedArray(vector<vector<int>>arr, int n, int m){
    int temp[m*n];
    int k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            temp[k++]=arr[i][j];
        }
    }
    sort(temp, temp+k);
    k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=temp[k++];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
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
    sortedArray(v, c, r);
}


