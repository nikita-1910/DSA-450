//Remove Duplicates in a sorted Linked List.
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

void removeNode(Node *head){
    Node* curr=head;
    Node* temp;
    if(curr==NULL){
        return;
    }
    while(curr->next){
        if(curr->data==curr->next->data){
            temp=curr->next->next;
            curr->next=temp;
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
    push(&head, 40);
    push(&head, 40);
    push(&head, 30);
    push(&head, 10);
    push(&head, 10);
    cout<<"list before removal : ";
    print(head);
    removeNode(head);
    cout<<"list after removal : ";
    print(head);
}
