#include<bits/stdc++.h>
using namespace std;

int findMaxLength(string str){
    int n=str.length();
    stack<int>stk;
    stk.push(-1);
    int res=0;
    for(int i=0; i<n; i++){
        if(str[i]=='('){
            stk.push(i);
        }
        else{
            if(!stk.empty()){
                stk.pop();
            }
            if(!stk.empty()){
                res=max(res, i-stk.top());
            }
            else{
                stk.push(i);
            }
        }
    }
    return res;
}

int main(){
    string str="()(()))))";
    cout<<findMaxLength(str);
}