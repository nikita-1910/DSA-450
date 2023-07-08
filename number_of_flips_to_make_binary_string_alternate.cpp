#include<bits/stdc++.h>
using namespace std;

char flip(char ch){
    return (ch=='0')?'1':'0';
}

int solve(string str, char expected){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]!=expected){
            count++;
        }
        expected=flip(expected);
    }
    return count;
}

int minFlip(string str){
    return min(solve(str, '0'), solve(str, '1'));
}

int main(){
    string str="0001010111";
    cout<<minFlip(str);
}