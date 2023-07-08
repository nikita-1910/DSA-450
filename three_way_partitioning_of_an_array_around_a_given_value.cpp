//Three way partitioning of an array around a given value
#include<bits/stdc++.h>
using namespace std;

void partitionArray(int arr[], int n, int a, int b){
    int l=0, r=n-1;
    for(int i=0; i<n;){
        if(arr[i]<a){
            if(i==l){
                l++, i++;
            }
            else{
            swap(arr[i], arr[l]);
            i++, l++;
            }
        }
        else if(arr[i]>b){
            swap(arr[i], arr[r]);
            r--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    partitionArray(arr, n, a, b);
    cout<<"Array after partition is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
