//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int c0=0, c1=0, c2=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            c0++;
        }
        if(arr[i]==1){
            c1++;
        }
        if(arr[i]==2){
            c2++;
        }
    }
    int i=0;
    while(c0){
        arr[i++]=0;
        c0--;
    }
    while(c1){
        arr[i++]=1;
        c1--;
    }
    while(c2){
        arr[i++]=2;
        c2--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
