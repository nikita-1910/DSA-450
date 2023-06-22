#include<bits/stdc++.h>
using namespace std;

void reverseFirstKElements(int k, queue<int>&q){
    if(q.empty()==true || k>q.size()){
        return;
    }
    if(k<=0){
        return;
    }
    stack<int>s;
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()){
        q.push(s.top());
        s.pop();
    }
    for(int i=0; i<q.size()-k; i++){
        q.push(q.front());
        q.pop();
    }
}

void print(queue<int>&q){
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
 
    int k = 5;
    reverseFirstKElements(k, q);
    print(q);
}