#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n){
	sort(arr, arr+n);
	int i=0, j=n-1;
	bool flag=true;
	int sum=0;
	while(i<j){
		sum+=abs(arr[i]-arr[j]);
		if(!flag){
			j--;
		}
		else{
			i++;
		}
		flag=!flag;
	}
	sum+=abs(arr[i]-arr[0]);
	return sum;
}

int main(){
	int n; 
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	cout<<maxSum(arr, n)<<endl;
}

