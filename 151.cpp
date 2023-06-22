//Check if a linked list is a circular linked list.
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

bool isCIrrcular(Node *head){
    Node* curr=head->next;
    if(head==NULL){
        return true;
    }
    while(curr!=NULL && curr!=head){
        curr=curr->next;
    }
    return (curr==head);
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
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    print(head);
    if(isCIrrcular(head)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    //making list cirrcular
    head->next->next->next->next=head;
    if(isCIrrcular(head)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

