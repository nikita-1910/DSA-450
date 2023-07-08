//Find longest coinsecutive subsequence
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n){
    unordered_set<int>s;
    int ans=0;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(s.find(arr[i]-1)==s.end()){
            int j=arr[i];
            while(s.find(j)!=s.end()){
                j++;
            }
            ans=max(ans, j-arr[i]);
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
    cout<<longestSubarray(arr, n);
}
