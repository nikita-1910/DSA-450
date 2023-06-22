#include<bits/stdc++.h>
using namespace std;

void solve(queue<int>&q){
    if(q.size()%2){
        cout<<"Input even number of integers"<<endl;
        return;
    }
    queue<int>temp;
    int h=q.size()/2;
    for(int i=0; i<h; i++){
        temp.push(q.front());
        q.pop();
    }
    while(!temp.empty()){
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
}

int main(){
    queue<int>q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    solve(q);
    int length=q.size();
    for(int i=0; i<length; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}