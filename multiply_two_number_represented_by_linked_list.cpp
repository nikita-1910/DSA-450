//Multiply 2 no. represented by LL
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

long long multiply(Node *first, Node *second){
    long long mod=1000000007;
    long long num1=0, num2=0;
    while(first || second){
        if(first){
            num1=(num1*10)%mod+first->data;
            first=first->next;
        }
        if(second){
            num2=(num2*10)%mod+second->data;
            second=second->next;
        }
    }
    return ((num1%mod)*(num2%mod))%mod;
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
    Node* first=NULL;
    Node* second=NULL;
    push(&first, 4);
    push(&first, 4);
    push(&first, 3);
    push(&second, 1);
    push(&second, 1);
    push(&second, 1);
    print(first);
    print(second);
    cout<<"Product is : "<<multiply(first, second);
}


