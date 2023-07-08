//Check whether a String is Palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool isPAlindrome(string str){
    int i=0, j=str.size()-1;
    while(i<j){
        if(str[i++]!=str[j--]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    cout<<isPAlindrome(str);
}

