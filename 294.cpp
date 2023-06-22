#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

 int isEmpty(node* head){
    return !head;
 }

void push(node** head, int x){
    node* temp=new node(x);
    temp->next=*head;
    *head=temp;
    cout<<x<<" pushed to stack\n";
}

int pop(node** head){
    if(isEmpty(*head)){
        return INT_MIN;
    }
    node* temp=(*head);
    (*head)=(*head)->next;
    int popped=temp->data;
    delete temp;
    return popped;
}

int peek(node** head){
    if(isEmpty(*head)){
        return INT_MIN;
    }
    return (*head)->data;
}

int main(){
    node* head=NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    cout<<pop (&head)<<" popped from stack\n";
    cout<<"top element is "<<peek(&head)<<endl;
    cout<<"elements present in stack are ";
    while(!isEmpty(head)){
        cout<<peek(&head)<<" ";
        pop(&head);
    }
    return 0;
}





