//Find the "Kth" max and min element of an array 
#include<bits/stdc++.h>
using namespace std; 
int kth_largest(int k, map<int, int>mp){
    int freq=0;
    for(auto it=mp.end(); it!=mp.begin(); it--){
        freq+=(it->second);
        if(freq>=k){
            return it->first;
        }
    }
    return -1;
}
int kth_smallest(int k, map<int, int>mp){
    int freq=0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        freq+=(it->second);
        if(freq>=k){
            return it->first;
        }
    }
    return -1;
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int mini=kth_smallest(k, mp);
    int maxi=kth_largest(k, mp);
    cout<<"maximum ="<<maxi << " & minimum ="<<mini;
}
