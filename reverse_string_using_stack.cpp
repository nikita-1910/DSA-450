#include <bits/stdc++.h>
using namespace std;

void solve(string &str){
    stack<char>s;
    for(auto it:str){
        s.push(it);
    }
    str.clear();
    while(!s.empty()){
	    str.push_back(s.top());
	    s.pop();
    }
}
int main() {
    string str = "Vedant Choudhary";
    solve(str);
    cout << "Reversed string is : " << str;
    return 0;
}
