//Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
void punion(int arr1[], int arr2[], int n1, int n2){
    vector<int>v;
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            do{
                i++;
            }
            while(i<n1 && arr1[i-1]==arr1[i]);
        }
        else if(arr1[i]>arr2[j]){
            v.push_back(arr2[j]);
            do{
                j++;
            }
            while(j<n2 && arr2[j-1]==arr2[j]);
        }
        else{
            v.push_back(arr1[i]);
            do{
                i++;
            }
            while(i<n1 && arr1[i-1]==arr1[i]);
            do{
                j++;
            }
            while(j<n2 && arr2[j-1]==arr2[j]);
        }
    }
    while(i<n1){
        v.push_back(arr1[i]);
        do{
                i++;
            }
            while(i<n1 && arr1[i-1]==arr1[i]);
    }
    while(j<n2){
        v.push_back(arr2[j]);
        do{
                j++;
            }
            while(j<n2 && arr2[j-1]==arr2[j]);
    }
    cout<<"Union:"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void pintersection(int arr1[], int arr2[], int n1, int n2){
    vector<int>v;
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            do{
                i++;
            }
            while(i<n1 && arr1[i-1]==arr1[i]);
        }
        else if(arr1[i]>arr2[j]){
            do{
                j++;
            }
            while(j<n2 && arr2[j-1]==arr2[j]);
        }
        else{
            v.push_back(arr1[i]);
            do{
                i++;
            }
            while(i<n1 && arr1[i-1]==arr1[i]);
            do{
                j++;
            }
            while(j<n2 && arr2[j-1]==arr2[j]);
        }
    }
    cout<<"Intersection:"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int arr1[n1], arr2[n2];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    //punion(arr1, arr2, n1, n2);
    pintersection(arr1, arr2, n1, n2);
    return 0;
}
