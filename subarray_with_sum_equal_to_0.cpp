//Find if there is any subarray with sum equal to 0
#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n){
    unordered_set<int>mp;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0 || mp.find(sum)!=mp.end()){
            return true;
        }
        mp.insert(sum);
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(subArrayExists(arr, n)){
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
}
