//Delete nodes which have a greater value on right side
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

void deleteNode(Node *head){
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data<curr->next->data){
            curr->data=curr->next->data;
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
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
    push(&head, 3);
    push(&head, 2);
    push(&head, 6);
    push(&head, 5);
    push(&head, 11);
    push(&head, 10);
    push(&head, 15);
    push(&head, 12);
    print(head);
    cout<<"upddated linked list : ";
    deleteNode(head);
    print(head);
}


