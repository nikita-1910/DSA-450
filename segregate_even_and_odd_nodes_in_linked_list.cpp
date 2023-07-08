//Segregate even and odd nodes in a Linked List
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

void updated(Node** head){
    Node* e_s=NULL, *e_e=NULL, *o_s=NULL, *o_e=NULL;
    Node* curr=*head;
    while(curr!=NULL){
        int val=curr->data;
        if(val%2==0){
            if(e_s==NULL){
                e_s=curr;
                e_e=e_s;
            }
            else{
                e_e->next=curr;
                e_e=e_e->next;
            }
        }
        else{
            if(o_s==NULL){
                o_s=curr;
                o_e=o_s;
            }
            else{
                o_e->next=curr;
                o_e=o_e->next;
            }
        }
        curr=curr->next;
    }
    if(o_s==NULL || e_s == NULL){
        return;
    }
    e_e->next=o_s;
    o_e->next = NULL;
    *head=e_s;
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
    push(&head, 35);
    push(&head, 70);
    push(&head, 10);
    push(&head, 10);
    print(head);
    cout<<"Updated list : ";
    updated(&head);
    print(head);
}



