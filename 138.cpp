//Write a program to Detect loop in a linked list.
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next; 
};

void push(Node **head, int d){
    Node *temp=new Node;
    temp->data=d;
    temp->next=*head;
    *head=temp;
} 

bool detect(Node* head){
    Node* slow=head, *fast=head; 
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }
    return 0;
}

void print(Node *head){
    Node *curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    Node *head=NULL;
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 30);
    push(&head, 10);
    print(head);
    //create a loop for testing
    head->next->next->next->next=head;
    if(detect(head)){
        cout<<"Loop found";
    }
    else{
        cout<<"Loop not found";
    }
}

