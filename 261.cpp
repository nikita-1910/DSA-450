#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n, work=0; ;
    cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=1; i<n; i++) { 
        a[i]+=a[i-1]; 
        work+=abs(a[i-1]); 
    } 
    cout<<work;
    return 0; 
} 
