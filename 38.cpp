//Median of 2 sorted arrays of different size
#include<bits/stdc++.h>
using namespace std;

int median(int arr1[], int arr2[], int m, int n){
    int i=0, j=0;
    int m1=-1, m2=-1;
    for(int k=0; k<=(m+n)/2; k++){
        m2=m1;
        if(i!=m && j!=n){
            if(arr1[i]>arr2[j]){
                m1=arr2[j];
                j++;
            }
            else{
                m1=arr1[i];
                i++;
            }
        }
        else if(i<n){
            m1=arr1[i];
            i++;            
        }
        else{
            m1=arr2[j];
            j++;
        }
    }
    if((m+n)%2==1){
        return m1;
    }
    else{
        return (m1+m2)/2;
    }
}

int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    cout<<"Median of two sorted array of different size is "<<median(arr1, arr2, m, n);
}
