//Flatten a Linked List
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next, *bottom;
    Node(int d){
        data=d;
        next=NULL;
        bottom=NULL;
    }
};

class cmp{
    public:
    bool operator()(Node* a, Node* b){
        return a->data>b->data;
    }
};

void flatten(Node *root){
    priority_queue<Node *, vector<Node *>, cmp>pq;
    while(root!=NULL){
        pq.push(root);
        root=root->next;
    }
    while(!pq.empty()){
        Node *temp=pq.top();
        pq.pop();
        cout<<temp->data<<" ";
        if(temp->bottom){
            pq.push(temp->bottom);
        }
    }
}

int main(){
    Node* head=new Node(5);
    Node* temp=head;
    Node* bt=head;
    bt->bottom=new Node(7);
    bt->bottom->bottom=new Node(8);
    bt->bottom->bottom->bottom=new Node(30);
    temp->next=new Node(10);
    temp = temp->next;
    bt = temp;
    bt->bottom = new Node(20);
    temp->next = new Node(19);
    temp = temp->next;
    bt = temp;
    bt->bottom = new Node(22);
    bt->bottom->bottom = new Node(50);
    temp->next = new Node(28);
    temp = temp->next;
    bt = temp;
    bt->bottom = new Node(35);
    bt->bottom->bottom = new Node(40);
    bt->bottom->bottom->bottom = new Node(45);
    flatten(head);
}


