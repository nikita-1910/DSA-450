//minimum no. of swaps required to sort the array
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int indexOf(int arr[], int e, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==e){
            return i;
        }
    }
    return -1;
}

int minSwaps(int arr[], int n){
    int res=0;
    vector<int>temp;
    for(int i=0; i<n; i++){
        temp[i]=arr[i];
    }
    sort(temp.begin(), temp.end());
    for(int i=0; i<n; i++){
        if(arr[i]!=temp[i]){
            res++;
            swap(arr, i, indexOf(arr, temp[i], n));
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum no. of swaps required are : ";
    minSwaps(arr, n);
}
