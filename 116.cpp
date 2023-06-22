//Bishu and Soldiers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin>>n>>q;
    int arr[n], prefix[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    prefix[0]=arr[0];
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0; i<q; i++){
        int power, low=0, high=n-1, idx=0;
        cin>>power;
        while(low<=high){
            int mid=(low+(high-low)/2);
            if(arr[mid]<=power){
                idx=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<idx+1<<" "<<prefix[idx]<<endl;
    }
}
