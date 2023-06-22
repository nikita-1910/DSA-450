//reverse the array
#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int i, int j){
    while (i<j){
       swap(arr[i], arr[j]);
       i++, j--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversearray(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

