//Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Minimum element is "<<arr[0]<<" and maximum element is "<<arr[n-1];
}
