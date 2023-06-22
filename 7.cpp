//Move all the negative elements to one side of the array 
#include<bits/stdc++.h>
using namespace std;
void shift(int arr[], int n){
    int l=0, r=n-1;
    while(l<=r){
        if(arr[l]<0 && arr[r]<0){
            l++;
        }
        else if(arr[l]>=0 && arr[r]<0){
            swap(arr[l], arr[r]);
            l++, r--;
        }
        else if(arr[l]>=0 && arr[r]>=0){
            r--;
        }
        else{
            l++, r--;
        }
    }
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    shift(arr, n);
}


