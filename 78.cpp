#include<bits/stdc++.h>
using namespace std;

int val(char ch){
    if(ch=='I'){
        return 1;
    }
    if(ch=='V'){
        return 5;
    }
    if(ch=='X'){
        return 10;
    }
    if(ch=='L'){
        return 50;
    }
    if(ch=='C'){
        return 100;
    }
    if(ch=='D'){
        return 500;
    }
    if(ch=='M'){
        return 1000;
    }
    return -1;
}

int romanToInteger(string str){
    int res=0;
    for(int i=0; i<str.length(); i++){
        int s1=val(str[i]);
        if(i+1<str.length()){
            int s2=val(str[i+1]);
            if(s1>=s2){
                res=res+s1;
            }
            else{
                res=res+s2-s1;
                i++;
            }
        }
        else{
            res=res+s1;
        }
    }
    return res;
}

int main(){
    string str="MCMIV";
    cout<<romanToInteger(str);
}