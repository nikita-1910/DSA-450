//Add “1” to a number represented as a Linked List.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node **head, int d){
    Node *temp=new Node;
    temp->data=d;
    temp->next=*head;
    *head=temp;
}

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *reverse(Node *head){
    Node *prev=NULL, *curr=head, *next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node *add(Node* head){
    Node* res=head, *temp;
    int carry=1, sum;
    while(head!=NULL){
        sum=carry+head->data;
        carry=(sum>=10)?1:0;
        sum%=10;
        head->data=sum;
        temp=head;
        head=head->next;
    }
    if(carry>0){
        Node* t=new Node;
        t->data=carry;
        temp->next=t; 
    }
    return res;
}

Node* addOne(Node* head){
    head=reverse(head);
    head=add(head);
    return reverse(head);
}

int main(){
    Node *head=NULL;
    push(&head, 9);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    print(head);
    head=addOne(head);
    print(head);
}

