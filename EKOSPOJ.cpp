//EKOSPOJ:
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int m){
    int l=1, r=arr[n-1], mid, count=0;
    while(l<r){
        mid=l+(r-l+1)/2;
        count=0; 
        for(int i=0; i<n; i++){
            if(arr[i]>mid){
                count=count+(arr[i]-mid);
            }
        }
        if(count>=m){
            l=mid;
        }
        else{
            r=mid-1;
        }
    }
    return l;
}

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Height required is "<<search(arr, n, m);
}

