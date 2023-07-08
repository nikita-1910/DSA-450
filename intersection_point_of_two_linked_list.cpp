//Intersection Point of two Linked Lists.
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

// void print(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
//     cout<<endl;
// }

Node* intersection(Node* first, Node* second){
    while(second){
        Node *temp=first;
        while(temp){
            if(temp==second){
                return second;
            }
            temp=temp->next;
        }
        second=second->next;
    }
    return NULL;
}

int main(){
    Node *first=NULL;
    Node *second=NULL;
    push(&first, 3);
    push(&first, 2);
    push(&first, 1);
    push(&second, 6);
    push(&second, 3);
    push(&second, 1);
    first->next=second->next->next;
    // print(first);
    // print(second);
    Node *ans=intersection(first, second);
    cout<<ans->data;
}



