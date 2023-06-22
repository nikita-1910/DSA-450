//Preorder Traversal of a tree both using recursion and Iteration
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

void RecursivePreorder(Node *root){
    if(root){
        cout<<root->data<<" ";
        RecursivePreorder(root->left);
        RecursivePreorder(root->right);
    }
}

void IterativePreorder(Node* root){
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* curr=st.top();
        st.pop();
        cout<<curr->data<<" ";
        if(curr->right){
            st.push(curr->right);
        }
        if(curr->left){
            st.push(curr->left);
        }
    }
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->left = newNode(7);
    root->right->left->right = newNode(8);
    cout<<"Recursive Preorder traversal : ";
    RecursivePreorder(root);
    cout<<"\nIterative Preorder traversal : ";
    IterativePreorder(root);
}

