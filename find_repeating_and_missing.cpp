//Find the repeating and the missing
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int, bool>mp;
    for(int i=0; i<n; i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=true;
        }
        else{
            cout<<"Repeating element is "<<arr[i]<<"\n";
        }
    }
    for(int i=1; i<=n; i++){
        if(mp.find(i)==mp.end()){
            cout<<"Missing element is "<<i<<"\n";
        }
    }
    return 0;
}
