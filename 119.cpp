//Find pivot element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n){
    int right_sum=0;
    for(int i=0; i<n; i++){
        right_sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0; i<n; i++){
        right_sum-=arr[i];
        if(right_sum==left_sum){
            return arr[i];
        }
        left_sum+=arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pivot=findPivot(arr, n);
    if(pivot!=-1){
        cout<<"Pivot element is "<<pivot;
    }
    if(pivot==-1){
        cout<<"Pivot element is no found";
    }
}
