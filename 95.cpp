#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 3

void printSentence(string arr[r][c], int m, int n, string output[r]){
    output[m]=arr[m][n];
    if(m==r-1){
        for(int i=0; i<r; i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<c; i++){
        if(arr[m+1][i]!=""){
            printSentence(arr, m+1, i, output);
        }
    }
}

void print(string arr[r][c]){
    string output[r];
    for(int i=0; i<c; i++){
        if(arr[0][i]!=""){
            printSentence(arr, 0, i, output);
        }
    }
}

int main(){
    string arr[r][c]={{"you", "we"}, {"have", "are"}, {"sleep", "eat", "drink"}};
    print(arr);
}