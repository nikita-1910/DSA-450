//Aggressive cows
#include<bits/stdc++.h>
using namespace std;

int isPossible(int n, int k, int arr[], int mid){
    int temp=arr[0];
    int cnt=1;
    for(int i=1; i<n; i++){
        if(arr[i]-temp>=mid){
            cnt++;
            temp=arr[i];
        }
        if(cnt==k){
            return true;
        }
    }
    return false;
}

int helper(int arr[], int n, int k){
    sort(arr, arr+n);
    int low=1, high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(isPossible(n, k, arr, mid)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<helper(arr, n, k);
}
