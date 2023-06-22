//Find Duplicate characters in a string
#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        int t=abs(arr[i]);
        if(arr[t]<0){
            return t;
        }
        arr[t]=-arr[t];
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<" duplicate = "<<duplicate(arr, n);
}
