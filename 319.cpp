#include<bits/stdc++.h>
using namespace std;

void print (queue<int>&q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverse(queue<int>&q){
    if(q.size()==0){
        return;
    }
    int fr=q.front();
    q.pop();
    reverse(q);
    q.push(fr);
}

int main(){
    queue<int>q;
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
    reverse(q);
    print(q);
}