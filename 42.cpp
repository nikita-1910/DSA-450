//Search an element in a matriix
#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>& arr, int c, int r, int s){
    for(int t=0; t<r; t++){
        int i=0, j=c-1;
        int mid;
        while(i<=j){
            mid=i+(j-1)/2;
            if(arr[i][mid]==s){
                return true;
            }
            if(arr[i][mid]>s){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
    }
    return false;
}

int main(){
    int c, r, s;
    cin>>c>>r>>s;
    vector<int>row(c);
    vector<vector<int>>v(r, row);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>v[i][j];
        }
    }
    if(search(v, c, r, s)){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }
}
