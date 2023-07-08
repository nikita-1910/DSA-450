//Median of 2 sorted arrays of equal size
#include<bits/stdc++.h>
using namespace std;

int median(int arr[], int n){
    if(n%2==0){
        return (arr[n/2]+arr[n/2-1])/2;
    }
    else{
        return arr[n/2];
    }
}

int get_median(int arr1[], int arr2[], int n){
    if(n<=0){
        return -1;
    }
    if(n==1){
        return (arr1[0]+arr2[0])/2;
    }
    if(n==2){
        return (max(arr1[0], arr2[0])+min(arr1[1], arr2[1]))/2;
    }
    int m1=median(arr1, n);
    int m2=median(arr2, n);
    if(m1==m2){
        return m1;
    }
    if(m1<m2){
        if(n%2==0){
            return get_median(arr1+n/2-1, arr2, n-n/2+1);

        }
        return get_median(arr1+n/2, arr2, n-n/2);
    }
    if(n%2==0){
        return get_median(arr2+n/2-1, arr1, n-n/2+1);
    }
    return get_median(arr2+n/2, arr1, n-n/2);
    
}

int main(){
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
    cout<<"Median of two sorted array of equal size is "<<get_median(arr1, arr2, n);
    
}
