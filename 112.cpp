//print all subarrays with 0 sum
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> printSubarray(int arr[], int n){
    unordered_map<int, vector<int>>mp;
    vector<pair<int, int>>temp;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0){
            temp.push_back(make_pair(0, 1));
        }
        if(mp.find(sum)!=mp.end()){
            vector<int>v=mp[sum];
            for(auto it=v.begin(); it != v.end(); it++){
                temp.push_back(make_pair(*it+1, i));
            }
        }
        mp[sum].push_back(i);
    }
    return temp;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<pair<int, int>>res=printSubarray(arr, n);
    if(res.size()==0){
        cout<<"No subarray exists.";
    }
    else{
        for(auto it=res.begin(); it!=res.end(); it++){
            cout<<"Subarray index : "<<it->first<<" to "<<it->second<<endl;
        }
    }
}
