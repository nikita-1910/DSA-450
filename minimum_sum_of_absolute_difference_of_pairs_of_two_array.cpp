#include <bits/stdc++.h>
using namespace std;

int findMinSum(int arr1[], int arr2[], int n){
	sort(arr1, arr1+n);
	sort(arr2, arr2+n);
	int sum=0 ;
	for(int i=0; i<n; i++){
		sum+=abs(arr1[i]-arr2[i]);
    }
	return sum;
}

int main(){
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
	cout<<findMinSum(arr1, arr2, n);
	return 0;
}

