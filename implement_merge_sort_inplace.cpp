//Implement Merge-sort in-place
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int low2=mid+1;
    if(arr[mid]<=arr[low2]){
        return;
    }
    while(low<=mid && low2<=high){
        if(arr[low]<arr[low2]){
            low++;
        }
        else{
            int val=arr[low2];
            int idx=low2;
            while(idx!=low){
                arr[idx]=arr[idx-1];
                idx--;
            }
            arr[low]=val;
            low++, mid++, low2++;
        }
    }
}

void mergeSort(int arr[], int l, int h){
    if(l<h){
        int mid=l+(h-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
