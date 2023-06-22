#include<bits/stdc++.h>
using namespace std;
queue<int>q;

void push(int data){
    int s=q.size();
    q.push(data);
    for(int i=0; i<s; i++){
        q.push(q.front());
        q.pop();
    }
}

void pop(){
    if(q.empty()){
        cout<<"no element";
    }
    else{
        q.pop();
    }
}

int top(){
    return q.empty()?-1:q.front();
}

bool empty(){
    return q.empty();
}

int size(){
    return q.size();
}

int main(){
    push(1);
    push(2);
    push(3);
    cout<<"Current Size :"<<size()<<endl;
    cout<<top()<<endl;
    pop();
    cout<<top()<<endl;
    pop();
    cout<<top()<<endl;
    cout<<"Current size: "<<size();
    return 0;
}