//find maximum product subarray 
#include<bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n){
    int max_product=arr[0], left=1, right=1;
    for(int i=0; i<n; i++){
        left=(left)*arr[i];
        right=(right)*arr[n-1-i];
        max_product=max(max_product, max(left, right));
        if(left==0){
            left=1;
        }
        if(right==0){
            right=1;
        }
    }
    return max_product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_product=maxProduct(arr, n);
    cout<<max_product;
}
