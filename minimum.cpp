#include<bits/stdc++.h>
using namespace std; 
int result(string str){
    int n=str.size(), start=0, end=n-1, ans=0;
    while(start<end){
        if(str[start]==str[end]){
            start++, end--;
        }
        else{
            ans++, start=0, end=n-ans-1;
        }
    }
    return ans;
}

int main(){
    string str="AACECAAAA";
    cout<<result(str);
}