#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[], int n){
	priority_queue<int, vector<int>, greater<int>>pq(arr, arr+n);
	int res = 0;
	while (pq.size()>1) {
		int first=pq.top();
		pq.pop();
		int second=pq.top();
		pq.pop();
		res += first + second;
		pq.push(first + second);
	}
	return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
	cout<<"Total cost for connecting ropes is "<< minCost(arr, n);
	return 0;
}

