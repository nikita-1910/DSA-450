//find Largest sum contiguous Subarray [V. IMP]
#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[], int n){
    int sum=0,maxSum=INT_MAX;
    for(int i=0; i<n; i++){
        maxSum=sum+arr[i];
        if(sum<maxSum){
            sum=maxSum;
        }
        if(maxSum<0){
            maxSum=0;
        }
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxSum=max_sum(arr, n);
    cout<<"Maximun sum = "<<maxSum;
}
