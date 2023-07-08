//Count triplet with sum smaller than a given value
#include<bits/stdc++.h>
using namespace std;

int triplets(int arr[], int n, int sum){
    sort(arr, arr+n);
    int cnt=0;
    for(int i=0; i<n-2; i++){
        int j=i+1, k=n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k]>=sum){
                k--;
            }
            else{
                cnt+=(k-j);
                j++;
            }
        }
    }
    return cnt;
}

int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"No. of triplets are : "<<triplets(arr, n, sum);
}

