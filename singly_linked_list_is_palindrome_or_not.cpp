//Write a Program to check whether the Singly Linked list is a palindrome or not.
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

bool ispalindrome(Node *head){
    Node* curr=head;
    if(head==NULL){
        return true;
    }
    stack<int>st;
    while(curr!=NULL){
        st.push(curr->data);
        curr=curr->next;
    }
    while(head!=NULL){
        int temp=st.top();
        st.pop();
        if(head->data!=temp){
            return false;
        }
        head=head->next;
    }
    return true;
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
    push(&head, 20);
    push(&head, 10);
    print(head);
    if(ispalindrome(head)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

