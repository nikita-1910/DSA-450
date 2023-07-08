//Rotate DoublyLinked list by N nodes.
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

void rotateLinkedList(Node** head, int pos){
    if(pos==0){
        return;
    }
    Node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=*head;
    (*head)->prev=temp;
    int cnt=1;
    while(cnt<=pos){
        *head=(*head)->next;
        temp=temp->next;
        cnt++;
    }
    temp->next=NULL;
    (*head)->prev=NULL;
}

int main(){
    Node *head=NULL;
    int pos;
    cin>>pos;
    push(&head, 60);
    push(&head, 50);
    push(&head, 40);
    push(&head, 20);
    push(&head, 10);
    print(head);
    rotateLinkedList(&head, pos);
    print(head);
}
