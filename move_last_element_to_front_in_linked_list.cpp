//Write a Program to Move the last element to Front in a Linked List.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head, int d){
    Node *temp=new Node;
    temp->data=d;
    temp->next=*head;
    *head=temp;
}

void removeNode(Node **head){
    if(*head==NULL || (*head)->next==NULL){
        return;
    }
    Node* secLast=NULL;
    Node* last=*head;
    while(last->next){
        secLast=last;
        last=last->next;
    }
    secLast->next=NULL;
    last->next=*head;
    *head=last;
}

void print(Node* head){
    Node *curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    cout<<"list before moving last to front : ";
    print(head);
    removeNode(&head);
    cout<<"list after moving last to front : ";
    print(head);
}

