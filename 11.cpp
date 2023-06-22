//Minimise the maximum difference between heights [V.IMP]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans=arr[n-1]-arr[0];
    int mini=arr[0], maxi=arr[n-1];
    for(int i=0; i<n; i++){
        if(arr[i]-k<0){
            continue;
        }
        mini=min(arr[0]+k, arr[i]-k);
        maxi=max(arr[i-1]+k, arr[n-1]-k);
        ans=min(ans, maxi-mini);
    }
    cout<<"minimum difference = "<<ans;
}
