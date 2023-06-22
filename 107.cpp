//find a pair with a given difference
#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[], int n, int diff){
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(n==0 && mp[arr[i]]>1){
            return true;
        }
    }
    if(n==0){
        return false;
    }
    for(int i=0; i<n; i++){
        if(mp.find(diff+arr[i])!=mp.end()){
            cout<<"Pair found :"<<arr[i]<<", "<<diff+arr[i];
            return true;
        }
    }
    cout<<"Pair not found";
    return false;
    
}

int main(){
    int n, diff;
    cin>>n>>diff;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    isPair(arr, n, diff);
}
