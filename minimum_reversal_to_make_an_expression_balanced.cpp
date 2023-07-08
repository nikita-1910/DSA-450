#include<bits/stdc++.h>
using namespace std;

int min_reversal(string str){
    stack<char>st;
    int res=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='{'){
            st.push(str[i]);
        }
        else if(!st.empty()){
            st.pop();
        }
        else{
            st.push('{');
            res++;
        }
    }
    if(st.size()%2!=0){
        return -1;
    }
    res+=st.size()/2;
    return res;
}

int main(){
    string expression="{{{{}}";
    cout<<min_reversal(expression);
}