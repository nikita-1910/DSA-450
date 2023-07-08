#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next, *prev;
};

class Deque{
    Node *head, *tail;
    public:
    Deque(){
        head=tail=NULL;
    }
    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    int size(){
        if(!isEmpty()){
            Node* temp=head;
            int len=0;
            while(temp!=NULL){
                len++;
                temp=temp->next;
            }
            return len;
        }
        return 0;
    }

    void insertFirst(int x){
        Node *temp=new Node[sizeof(Node)];
        temp->val=x;
        if(head==NULL){
            head=tail=temp;
            temp->next=temp->prev=NULL;
        }
        else{
            head->prev=temp;
            temp->next=head;
            temp->prev=NULL;
            head=temp;
        }
    }

    void insertTail(int x){
        Node* temp=new Node[sizeof(Node)];
        temp->val=x;
        if(head==NULL){
            head=tail=temp;
            temp->next=temp->prev=NULL;
        }
        else{
            tail->next=temp;
            temp->next=NULL;
            temp->prev=tail;
            tail=temp;
        }
    }

    void removeFirst(){
        if(!isEmpty()){
            Node* temp=head;
            head=head->next;
            if(head){
                head->prev=NULL;
            }
            delete(temp);
            if(head==NULL){
                tail=NULL;
            }
            return;
        }
        cout<<"list is empty"<<endl;
    }

    void removeLast(){
        if(!isEmpty()){
            Node* temp=tail;
            tail=tail->prev;
            if(tail){
                temp->next=NULL;
            }
            delete(temp);
            if(tail==NULL){
                head=NULL;
            }
            return;
        }
        cout<<"List is empty"<<endl;
    }

    void display(){
        if(!isEmpty()){
            Node*temp=head;
            while (temp!=NULL)
            {
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
            return;
        }
        cout<<"List is Empty"<<endl;
    }
};

class Stack: public Deque{
    public:
    void push(int x){
        insertTail(x);
    }
    void pop(){
        removeLast();
    }
};

class Queue:public Deque{
    public:
    void enqueue(int x){
        insertTail(x);
    }
    void dequeue(){
        removeFirst();
    }
};

int main(){
    Stack stk;
     stk.push(7);
    stk.push(8);
    cout << "Stack: ";
    stk.display();
     stk.pop();
    cout << "Stack: ";
    stk.display();
     Queue que;
    que.enqueue(12);
    que.enqueue(13);
    cout << "Queue: ";
    que.display();
     que.dequeue();
    cout << "Queue: ";
    que.display();

    cout << "Size of Stack is " << stk.size() << endl;
    cout << "Size of Queue is " << que.size() << endl;
    return 0;
}