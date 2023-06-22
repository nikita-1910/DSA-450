//find majority element
#include<bits/stdc++.h>
using namespace std;

void majority_element(int arr[], int n){
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int flag=0;
    for(auto it:mp){
        if(it.second>n/2){
            flag=1;
            cout<<"Majority element is "<<it.first<<"\n";
            break;
        }
    }
    if(flag==0){
        cout<<"No majority element is found \n";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    majority_element(arr, n);
}
