//Product array Puzzle
#include<bits/stdc++.h>
using namespace std;

void productArray(int arr[], int n){
    if(n==1){
        cout<<0;
        return;
    }
    int i, temp=1;
    int product[n];
    memset(product, 1, n);
    for(int i=0; i<n; i++){
        product[i]=temp;
        temp*=arr[i];
    }
    temp=1;
    for(int i=n-1; i>=0; i--){
        product[i]*=temp;
        temp*=arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<product[i]<<" ";
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    productArray(arr, n);
}
