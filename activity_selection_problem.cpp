#include<bits/stdc++.h>
using namespace std;
vector<int>meeting(int s[], int e[], int n){
    pair<int, int>arr[n+1];
    vector<int>ans;
    for(int i=0; i<n; i++){
        arr[i].first=e[i];
        arr[i].second=i;
    }
    sort(arr, arr+n);
    int timee=arr[0].first;
    ans.push_back(arr[0].second+1);
    for(int i=1; i<n; i++){
        if(s[arr[i].second]>timee){
            ans.push_back(arr[i].second+1);
            timee=arr[i].first;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int start[n], end[n];
    for(int i=0; i<n; i++){
        cin>>start[i];
        cin>>end [i];
    }
    vector<int>ans=meeting(start, end, n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
