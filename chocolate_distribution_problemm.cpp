#include<bits/stdc++.h>
using namespace std;

int min_difference(int arr[], int n, int students){
    int min_diff=INT_MAX;
    if(n==0 || students==0){
        return 0;
    }
    sort(arr, arr+n);
    if(n<students){
        return -1;
    }
    for(int i=0; i+students-1<n; i++){
        int temp=arr[i+students-1]-arr[i];
        if(temp<min_diff){
            min_diff=temp;
        }
    }
    return min_diff;
}

int main(){
    int n, students;
    cin>>n>>students;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum difference is = "<<min_difference(arr, n, students);
}

