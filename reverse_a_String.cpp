//Reverse a String
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0, j=str.size()-1;
    while(i<=j){
        swap(str[i], str[j]);
        i++, j--;
    }
    cout<<str;
}

