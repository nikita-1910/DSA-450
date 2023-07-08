#include<bits/stdc++.h>
using namespace std;

void firstNegative(int arr[], int n, int k){
    deque<int>dq;
    for(int i=0; i<n; i++){
        if(!dq.empty() && dq.front()==i-k){
            dq.pop_front(); 
        }
        if (arr[i]<0){
            dq.push_back(i);
        }
        if(i>=k-1){
            if(!dq.empty()){
                cout<<arr[dq.front()]<<" ";
            }
            else{
                cout<<"0";
            }
        }
    }
}

int main(){
    int arr[]={12, -1, -7, 8, -15, 30, 16, 28};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    firstNegative(arr, n, k);
}