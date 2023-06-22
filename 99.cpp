//Find a Fixed Point (Value equal to index) in a given array
#include<bits/stdc++.h>
using namespace std;

vector<int>fixed_point(int arr[], int n){
    vector<int>v;
    for(int i=0; i<n; i++){
        if(arr[i]==i+1){
            v.push_back(i+1);
        }
    }
    return v;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>res=fixed_point(arr, n);
    cout<<"Elements whose index is equal to the value are ";
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}
