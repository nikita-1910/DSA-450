//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.
#include<bits/stdc++.h>
using namespace std;

void moreNdivK(int arr[], int n, int k){
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>(n/k)){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moreNdivK(arr, n, k);
}
