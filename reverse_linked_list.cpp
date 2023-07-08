//Write a Program to reverse the Linked List. (Both Iterative and recursive)
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void reverse(){
        Node* curr=head, *prev=NULL, *next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    
    void print(){
        struct Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    void push(int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }
};

int main(){
    LinkedList ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.print();
    ll.reverse();
    ll.print();
}
