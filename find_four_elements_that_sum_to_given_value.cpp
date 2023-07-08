//find four elements that sum to a given value
#include<bits/stdc++.h>
using namespace std;

void fourElements(int arr[], int n, int sum){
    unordered_map<int, pair<int, int>>mp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            mp[arr[i]+arr[j]]={i, j};
        }
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int temp=arr[i]+arr[j];
            if(mp.find(sum-temp)!=mp.end()){
                pair<int, int>p=mp[sum-temp];
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j){
                    cout<<arr[i]<<", "<<arr[j]<<", "<<arr[p.first]<<", "<<arr[p.second];
                    return;
                }
            }
        }
    }
}

int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fourElements(arr, n, sum);
}

