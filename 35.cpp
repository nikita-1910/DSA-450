//Minimum swaps required bring elements less equal K together
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int n, int k){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]<=k){
            cnt++;
        }
    }
    int temp=0;
    for(int i=0; i<cnt; i++){
        if(arr[i]>k){
            temp++;
        }
    }
    int res=temp;
    for(int i=0, j=cnt; j<n; i++, j++){
        if(arr[i]>k){
            temp--;
        }
        if(arr[j]>k){
            temp++;
        }
        res=min(res, temp);
    }
    return res;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Swaps required = "<<minSwaps(arr, n, k);
}
