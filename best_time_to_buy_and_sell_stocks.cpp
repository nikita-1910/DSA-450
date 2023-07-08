//Best time to buy and Sell stock
#include<bits/stdc++.h>
using namespace std;

int max_profit(int arr[], int n){
    int maxprofit=0, minprice=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i-1]){
            maxprofit=max(maxprofit, arr[i]-minprice);
        }
        else{
            minprice=min(minprice, arr[i]);
        }
    }
    return maxprofit;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"maximum profit = "<<max_profit(arr, n);
}
