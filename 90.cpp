#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string str){
    stack<char>st;
    string res="";
    for(int i=0; i<str.length(); i++){
        if(st.empty()){
            st.push(str[i]);
        }
        else if(st.top()!=str[i]){
            st.push(str[i]);
        }
        else{
            st.pop();
        }
    }
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string str="azxxzy";
    cout<<removeDuplicate(str);
}