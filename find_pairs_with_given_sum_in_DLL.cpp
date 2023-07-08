//Find pairs with a given sum in a DLL.
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev, *next;
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void push(Node **head, int d){
    Node *temp=new Node();
    temp->data=d;
    temp->prev=NULL;
    temp->next=(*head);
    if((*head)!=NULL){
        (*head)->prev=temp;
    }
    (*head)=temp;
}

void findPair(Node* head, int sum){
    Node *left=head, *right=head;
    while(right->next!=NULL){
        right=right->next;
    }
    bool flag=0;
    while(left!=right && right->next!=left){
        if((left->data+right->data)==sum){
            flag=1;
            cout<<"("<<left->data<<", "<<right->data<<") ";
            left=left->next;
            right=right->prev;
        }
        else{
            if((left->data+right->data)<sum){
                left=left->next;
            }
            else{
                right=right->prev;
            }
        }
    }
    if(flag==0){
        cout<<"No pair found";
    }
}

int main(){
    Node *head=NULL;
    int sum;
    cin>>sum;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    print(head);
    findPair(head, sum);
}


