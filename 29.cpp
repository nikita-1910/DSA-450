//Find whether an array is a subset of another array
#include<bits/stdc++.h>
using namespace std;

bool is_subset(int arr1[], int arr2[], int m, int n){
    map<int, int>mp;
    for(int i=0; i<m; i++){
        mp[arr1[i]]++;
    }
    for(int i=0; i<n; i++){
        if(mp.find(arr2[i])==mp.end()){
            return false;
        }
    }
    return true;
}

int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if(is_subset(arr1, arr2, m, n)){
        cout<<"array is subset";
    }
    else{
        cout<<"array is not subset";
    }
}
