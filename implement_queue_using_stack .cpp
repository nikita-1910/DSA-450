#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>st;
    public:
    void enQueue(int x){
        st.push(x);
    }
    int dequeue(){
        if(st.empty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int x=st.top();
        st.pop();
        if(st.empty()){
            return x;
        }
        int item=dequeue();
        st.push(x);
        return item;
    }
};

int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}