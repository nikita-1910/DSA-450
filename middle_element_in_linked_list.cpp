//Find the middle Element of a linked list.
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

Node* findMiddle(Node *head){
    Node* curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    int temp=count/2;
    count=0;
    curr=head;
    while(count<temp){
        curr=curr->next;
        count++;
    }
    return curr;
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
    push(&head, 40);
    push(&head, 40);
    push(&head, 30);
    push(&head, 10);
    push(&head, 10);
    push(&head, 10);
    print(head);
    cout<<"Middle element : ";
    findMiddle(head);
}

