//find common elements In 3 sorted arrays
#include<bits/stdc++.h>
using namespace std;

void findCommon(int arr1[], int arr2[], int arr3[], int l, int m, int n){
    int i=0, j=0, k=0;
    int prev1, prev2, prev3;
    prev1=INT_MIN , prev2=INT_MIN, prev3=INT_MIN;
    while(i<l && j<m && k<n){
        while(arr1[i]==prev1 && i<l){
            i++;
        }
        while(arr2[j]==prev2 && j<m){
            j++;
        }
        while(arr3[k]==prev3 && k<n){
            k++;
        }
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            prev1=arr1[i++];
            prev2=arr2[j++];
            prev3=arr3[k++];
        }
        else if(arr1[i]<arr2[j]){
            prev1=arr1[i++];
        }
        else if(arr2[j]<arr3[k]){
            prev2=arr2[j++];
        }
        else{
            prev3=arr3[k++];
        }
    }
}

int main(){
    int l, m, n;
    cin>>l>>m>>n;
    int arr1[l], arr2[m], arr3[n];
    for(int i=0; i<l; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr3[i];
    }
    findCommon(arr1, arr2, arr3, l, m, n);
    //cout<<"common elements are "<<findCommon(arr1, arr2, arr3, l, m, n);
}
