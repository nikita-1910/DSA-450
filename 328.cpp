#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;

int minStringValue(string str, int k){
    int l=str.length();
    if(k>=l){
        return 0;
    }
    int count[MAX_CHAR]={0};
    for(int i=0; i<l; i++){
        count[str[i]-'a']++;
    }
    priority_queue<int>pq;
    for(int i=0; i<MAX_CHAR; i++){
        pq.push(count[i]);
    }
    while(k--){
        int temp=pq.top();
        pq.pop();
        temp--;
        pq.push(temp);
    }
    int result=0; 
    while(!pq.empty()){
        int temp=pq.top();
        result+=temp*temp;
        pq.pop();
    }
    return result;
}

int main(){
    string str="abbccc";
    int k=2;
    cout<<minStringValue(str, k);
}