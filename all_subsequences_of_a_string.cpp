#include<bits/stdc++.h>
using namespace std;
unordered_set<string>st;

void subsequence(string str){
    for(int i=0; i<str.length(); i++){
        for(int j=str.length(); j>i; j--){
            string subStr=str.substr(i, j);
            st.insert(subStr);
            for(int k=1; k<subStr.length(); k++){
                string sb=subStr;
                sb.erase(sb.begin()+k);
                subsequence(sb);
            }   
        }
    }
}


int main(){
    string str="aabc";
    subsequence(str);
    for(auto i:st){
        cout<<i<<" ";
    }
    return 0;
}