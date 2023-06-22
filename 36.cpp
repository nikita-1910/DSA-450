//Minimum no. of operations required to make an array palindrome
#include<bits/stdc++.h>
using namespace std;

int min_operations(int arr[], int n){
    int ans=0;
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++, j--;
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]+=arr[j+1];
            ans++;
        }
        else{
            i++;
            arr[i]+=arr[i-1];
            ans++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum operations = "<<min_operations(arr, n);
}
