//Write a Code to check whether one string is a rotation of another
#include<bits/stdc++.h>
using namespace std;

bool rotation(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    string temp=s1+s1;
    return (temp.find(s2)!=string::npos);
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(rotation(s1, s2)){
        cout<<"Strings are rotation of each other.";
    }
    else{
        cout<<"Strings are not rotation of each other.";
    }
}

