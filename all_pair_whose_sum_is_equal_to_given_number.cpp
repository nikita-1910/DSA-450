//find all pairs on integer array whose sum is equal to given number
#include<bits/stdc++.h>
using namespace std;

int countPair(int arr[], int n, int sum){
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=mp[sum-arr[i]];
        if(sum-arr[i]==arr[i]){
            ans--;
        }
    }
    return ans/2;
}

int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"pair count = "<<countPair(arr, n, sum);
}
