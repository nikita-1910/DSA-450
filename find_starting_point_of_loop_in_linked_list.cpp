//Find the starting point of the loop. 
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

Node *removeLoop(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head, *fast=head;
    while(slow && fast && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return NULL;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
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
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    print(head);
    head->next->next->next->next->next=head->next->next;
    Node *res=removeLoop(head);
    if(res==NULL){
        cout<<"Loop does not exists";
    }
    else{
        cout<<"Startirg node is "<<res->data;
    }
}
