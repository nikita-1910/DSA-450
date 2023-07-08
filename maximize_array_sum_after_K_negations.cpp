#include <bits/stdc++.h>
using namespace std;

int sol(int a[], int n, int k){
	int sum;
    sort(a, a+n);
    for(int i=0;i<n;i++){
        if(a[i]<0 && k>0){
            a[i]=-1*a[i];
            k--;
        }
    }
    sort(a, a+n);
    while(k>0){
        a[0]=-1*a[0];
        k--;
    }
    sum=accumulate(a, a+n, 0);
    return sum;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
	cout<<sol(arr, n, k)<<endl;
	return 0;
}


