//Inorder Traversal of a tree both using recursion and Iteration
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
};

Node *newNode(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void RecursiveInorder(Node *root){
    if(root){
        RecursiveInorder(root->left);
        cout<<root->data<<" ";
        RecursiveInorder(root->right);
    }
}

void IterativeInorder(Node* root){
    stack<Node*>st;
    Node* curr=root;
    while(!st.empty() || curr!=NULL){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            curr=st.top();
            st.pop();
            cout<<curr->data<<" ";
            curr=curr->right;
        }
    }
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Recursive inorder traversal : ";
    RecursiveInorder(root);
    cout<<"\nIterative inorder traversal : ";
    IterativeInorder(root);
}

