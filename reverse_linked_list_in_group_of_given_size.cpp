//Reverse a Linked List in group of Given Size. [Very Imp]
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverse(Node *head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        return head;
    }
    Node* curr=head, *prev=NULL, *next=NULL;
    int cnt=0;
    while(curr && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next){
        head->next=reverse(next, k);
    }
    return prev;
}

void push(Node** head, int d){
    Node* temp=new Node();
    temp->data=d;
    temp->next=(*head);
    (*head)=temp;
}

void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    push(&head, 40);
    push(&head, 45);
    print(head);
    head=reverse(head, 4);
    print(head);
}

