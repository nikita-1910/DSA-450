//maximum sum such that no 2 elements are adjacent
#include<bits/stdc++.h>
using namespace std;

int rob(int arr[], int n){
    int curr=0, prev1=0, prev2=0;
    for(int i=2; i<n+2; i++){
        int curr=max(arr[i-2]+prev2, prev1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum amount is "<<rob(arr, n);
}
