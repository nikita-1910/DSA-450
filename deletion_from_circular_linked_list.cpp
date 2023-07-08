//Deletion from a Circular Linked List.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void print(Node *head){
    Node *curr=head;
    if(head!=NULL){
        do{
            cout<<curr->data<<" ";
            curr=curr->next;
        }while(curr!=head);
    }
    cout<<endl;
}

void push(Node** head, int data){
    Node* ptr1=new Node();
    ptr1->data=data;
    ptr1->next=*head;
    if (*head!=NULL) {
        Node*temp=*head;
        while(temp->next!=*head){
            temp=temp->next;
        }
        temp->next=ptr1;
    }
    else{
        ptr1->next=ptr1; 
  }
    *head=ptr1;
}

void deleteNode(Node **head, int s){
    if(head==NULL){
        return;
    }
    if((*head)->data==s && (*head)->next==*head){
        delete(*head);
        *head=NULL;
        return;
    }
    Node *last=*head;
    if((*head)->data==s){
        while(last->next!=*head){
            last=last->next;
        }
        last->next=(*head)->next;
        delete(*head);
        *head=last->next;
        return;
    }
    while(last->next!=NULL && last->next->data!=s){
        last=last->next;
    }
    Node *temp;
    if(last->next->data==s){
        temp=last->next;
        last->next=temp->next;
        delete(temp);
    }
}

int main(){
    Node* head=NULL;
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    print(head);
    deleteNode(&head, 50);
    print(head);
}
