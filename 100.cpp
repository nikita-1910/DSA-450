//Search in a rotated sorted array
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int s){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==s){
            return mid;
        }
        if(arr[mid]>=arr[low]){
            if(s<arr[mid] && s>=arr[low]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(s>arr[mid] && s<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n, s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res=search(arr, n, s);
    if(res==-1){
        cout<<"Element not found.";
    }
    else{
        cout<<"Element found at index "<<res;
    }
}
