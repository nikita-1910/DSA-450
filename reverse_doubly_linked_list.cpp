//Reverse a Doubly Linked list.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev, *next;
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void push(Node **head, int d){
    Node *temp=new Node();
    temp->data=d;
    temp->prev=NULL;
    temp->next=(*head);
    if((*head)!=NULL){
        (*head)->prev=temp;
    }
    (*head)=temp;
}

void reverse(Node** head){
    Node *previous=NULL, *current=*head;
    while(current!=NULL){
        previous=current->prev;
        current->prev=current->next;
        current->next=previous;
        current=current->prev;
    }
    if(previous!=NULL){
        *head=previous->prev;
    }
}

int main(){
    Node *head=NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    print(head);
    reverse(&head);
    print(head);
}

