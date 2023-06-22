//Find the triplet that sum to a given value
#include<bits/stdc++.h>
using namespace std;

bool triplet(int arr[], int n, int sum){
    int i, j;
    sort(arr, arr+n);
    for(int k=0; k<n-2; k++){
        i=k+1, j=n-1;
        while(i<j){
            if(arr[i]+arr[k]+arr[j]==sum){
                cout<<"Triplet is "<<arr[i]<<" "<<arr[k]<<" "<<arr[j]<<"\n";
                return true;
            }
            else if(arr[i]+arr[k]+arr[j]<sum){
                i++;
            }
            else{
                j--;
            }
        }
    }
    return false;
}

int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(triplet(arr, n, sum)){
        cout<<"triplet found";
    }
    else{
        cout<<"triplet not found";
    }
}

