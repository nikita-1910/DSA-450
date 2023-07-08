//Write a Program to check whether a string is a valid shuffle of two strings or not
#include<bits/stdc++.h>
using namespace std;

bool checkLength(string s1, string s2, string result){
    if(s1.length()+s2.length()!=result.length()){
        return false;
    }
    else{
        return true;
    }
}

string sortString(string str){
    sort(str.begin(), str.end());
    return str;
}

bool shuffleCheck(string s1, string s2, string result){
    s1=sortString(s1);
    s2=sortString(s2);
    result=sortString(result);
    int i=0, j=0, k=0;
    while(k!=result.length()){
        if(i<s1.length() && s1.at(i)==result.at(k)){
            i++;
        }
        else if(j<s2.length() && s2.at(j)==result.at(k)){
            j++;
        }
        else{
            return false;
        }
        k++;
    }
    if(i<s1.length() || j<s2.length()){
        return false;
    }
    return true;
}
int main(){
    string s1="xy", s2="12";
    string results[]={"1xy2", "y1x2", "y21xx"};
    for(auto result:results){
        if(checkLength(s1, s2, result) && shuffleCheck(s1, s2, result)){
            cout<<result<<" is a valid shuffle of "<<s1<<" and "<<s2<<"\n";
        }
        else{
            cout<<result<<" is not a valid shuffle of "<<s1<<" and "<<s2<<"\n";
        }
    }
}
