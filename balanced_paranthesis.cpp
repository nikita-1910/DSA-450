#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    stack<char>st;
    for(int i=0; i<str.length(); i++){
        if(st.empty()){
            st.push(str[i]);
        }
        else if((str[i]==')' && st.top()=='(') || (str[i]==']' && st.top()=='[') || (str[i]=='}' && st.top()=='{')){
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main(){
    string str="{))}[]";
    if(isBalanced(str)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}