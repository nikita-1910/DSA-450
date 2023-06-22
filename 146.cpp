//Intersection of two Sorted Linked List.
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

Node* intersection(Node* first, Node* second){
    Node *temp=second;
    unordered_map<int, int>mp;
    while(temp!=NULL){
        mp[temp->data]++;
        temp=temp->next;
    }
    temp=first;
    vector<int>v;
    while(temp!=NULL){
        if(mp[temp->data]>0){
            v.push_back(temp->data);
            mp[temp->data]--;
        }        
        temp=temp->next;
    }
    Node* head=new Node();
    head->data=v[0];
    for(int i=1; i<v.size(); i++){
        Node* n=new Node();
        n->data=v[i];
        temp->next=n;
        temp=n;
    }
    return head;
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
    print(first);
    print(second);
    Node *ans=intersection(first, second);
    print(ans);
}


