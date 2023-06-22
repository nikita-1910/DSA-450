#include <bits/stdc++.h>
using namespace std;

class Queue{
    int rear, front, size, *arr;
    public:
    Queue(int s){
        front=rear=-1;
        size=s;
        arr=new int[s];
    }
    void enqueue(int val){
        if((front==0 && rear==size-1) || rear==(front-1)%(size-1)){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    int deQueue(){
        if(front==-1){
            cout<<"Queue is Eempty"<<endl;
            return -1;
        }
        int temp=arr[front];
        arr[front]=-1;
        if(front==rear){
            front=rear=-1;
        }
        else if (front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return temp;
    }

    void display(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        if(rear>=front){
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            for(int i=front; i<size; i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0; i<rear; i++){
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main(){
    Queue q(5);
    q.enqueue(14);
    q.enqueue(22);
    q.enqueue(13);
    q.enqueue(-6);
    q.display();
    cout<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    q.enqueue(9);
    q.enqueue(20);
    q.enqueue(5);
    q.display();
}