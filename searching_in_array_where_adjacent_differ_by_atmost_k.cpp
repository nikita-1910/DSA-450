//Searching in an array where adjacent differ by at most k
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int s, int k){
    int i=0; 
    while(i<n){
        if(arr[i]==s){
            return i;
        }
        i=i+max(1, abs(arr[i]-s)/k);
    }
    cout<<"Number is not present";
    return -1;
}

int main(){
    int n, s, k; 
    cin>>n>>s>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Element is present at index "<<search(arr, n, s, k);
}
