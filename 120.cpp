//K-th Element of Two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;

int findElement(int arr1[], int arr2[], int n1, int n2, int k){
    int temp_k=0, i=0, j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            temp_k++;
            if(temp_k==k){
                return arr1[i];
            }
            i++;
        }
        else{
            temp_k++;
            if(temp_k==k){
                return arr2[j];
            }
            j++;
        }
    }
    while(i<n1){
        temp_k++;
            if(temp_k==k){
                return arr1[i];
            }
        i++;
    }
    while(j<n2){
        temp_k++;
            if(temp_k==k){
                return arr2[j];
            }
        j++;
    }
}

int main(){
    int n1, n2, k;
    cin>>n1>>n2>>k;
    int arr1[n1], arr2[n2];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin>>arr2[n2];
    }
    cout<<"Element : "<<findElement(arr1, arr2, n1, n2, k);
}

