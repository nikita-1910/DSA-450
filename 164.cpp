//Sort a LL of 0's, 1's and 2's
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void push(Node** head, int d){
    Node *temp=new Node(d);
    temp->next=*head;
    *head=temp;
}

Node* sortList(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *t_0=new Node(0);
    Node *t_1=new Node(0);
    Node *t_2=new Node(0);
    Node *zero=t_0, *one=t_1, *two=t_2;
    Node *curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zero->next=curr;
            zero=zero->next;
        }
        else if(curr->data==1){
            one->next=curr;
            one=one->next;
        }
        else{
            two->next=curr;
            two=two->next;
        }
        curr=curr->next;
    }
    if(t_1->next){
        zero->next=t_1->next;
    }
    else{
        zero->next=t_2->next;
    }
    one->next=t_2->next;
    two->next=NULL;
    head=t_0->next;
    delete t_0;
    delete t_1;
    delete t_2;
    return head;
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
    push(&head, 0);
    push(&head, 1);
    push(&head, 2);
    push(&head, 0);
    push(&head, 1);
    push(&head, 2);
    print(head);
    head=sortList(head);
    print(head);
}


