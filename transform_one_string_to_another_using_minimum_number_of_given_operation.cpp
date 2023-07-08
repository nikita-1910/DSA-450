#include<bits/stdc++.h>
using namespace std;

int transform(string A, string B){
    if(A.length()!=B.length()){
        return -1;
    }
    unordered_map<char, int>m;
    int n=A.length();
    for(int i=0; i<n; i++){
        if(m.count(A[i])){
            m[A[i]]++;
        }
        else{
            m[A[i]]=1;
        }
    }
    for(int i=0; i<n; i++){
        if(m.count(B[i])){
            m[B[i]]--;
        }
    }
    for(auto it:m){
        if(it.second!=0){
            return -1;
        }
    }
    int i=n-1, j=n-1;
    int res=0; 
    while(i>=0 && j>=0){
        while(i>=0 && A[i]!=B[j]){
            res++, i--;
        }
        i--, j--;
    }
    return res;
}

int main(){
    string A="EACBD";
    string B="EABCD";
    cout<<"Minimum number of operations required: "<<transform(A, B)<<endl;
}