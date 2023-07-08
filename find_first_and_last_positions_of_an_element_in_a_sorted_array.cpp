//Find first and last positions of an element in a sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> min_max(int arr[], int n, int x){
    int a=-1, b=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            a=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i]==x){
            b=i;
            break;
        }
    }
    return {a, b};
}
int main(){
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>res=min_max(arr, n, x);
    cout<<"Minimum index is "<<res[0]<<" and maximum index is "<<res[1];
}
