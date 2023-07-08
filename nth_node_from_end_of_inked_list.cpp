//Program for n’th node from the end of a Linked List
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

void findNthNode(Node *head, int n){
    Node *curr=head;
    int length=0;
    while(curr!=NULL){
        curr=curr->next;
        length++;
    }
    if(length<n){
        return;
    }
    curr=head;
    for(int i=1; i<length-n+1; i++){
        curr=curr->next;
    }
    cout<<curr->data;
    return;
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
    int n;
    cin>>n;
    Node* head=NULL;
    push(&head, 60);
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    print(head);
    findNthNode(head, n);
}
