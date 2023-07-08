//Smallest Subarray with sum greater than a given value
#include<bits/stdc++.h>
using namespace std;

int smallest_subarray(int arr[], int n, int sum){
    int min_length=INT_MAX;
    for(int i=0; i<n; i++){
        int curr_sum=arr[i];
        if(curr_sum>sum){
            return 1;
        }
        for(int j=i+1; j<n; j++){
            curr_sum+=arr[j];
            if(curr_sum>sum && (j-i+1)<min_length){
                min_length=j-i+1;
            }
        }
    }
    return min_length;
}

int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(smallest_subarray(arr, n, sum)>n){
        cout<<"Not possible";
    }
    else{
        cout<<"Length of smallest subarray is = "<<smallest_subarray(arr, n, sum);
    }
}
