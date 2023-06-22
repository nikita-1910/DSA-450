//Add two numbers represented by linked lists.
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

Node *add(Node* first, Node* second){
    first=reverse(first), second=reverse(second);
    Node *head=NULL, *prev=NULL, *sum=NULL;
    int carry=0;
    while(first!=NULL || second!=NULL || carry==1){
        int val=carry;
        if(first){
            val+=first->data;
        }
        if(second){
            val+=second->data;
        }
        carry=val/10;
        val=val%10;
        Node *temp=new Node();
        temp->data=val;
        temp->next=sum;
        sum=temp;
        if(first){
            first=first->next;
        }
        if(second){
            second=second->next;
        }
    }
    return sum;
}


int main(){
    Node *first=NULL;
    Node *second=NULL;
    push(&first, 1);
    push(&first, 2);
    push(&first, 3);
    push(&second, 4);
    push(&second, 5);
    push(&second, 6);
    print(first);
    print(second);
    Node *ans=add(first, second);
    print(ans);
}

