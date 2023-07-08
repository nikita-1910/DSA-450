#include<bits/stdc++.h>
using namespace std;

void split(string str){
    int c0=0, c1=0, count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='0'){
            c0++;
        }
        if(str[i]=='1'){
            c1++;
        }
        if(c0==c1){
            count++;
        }
    }
    cout<<count;
}

int main(){
    string str="0100110101";
    split(str);
}