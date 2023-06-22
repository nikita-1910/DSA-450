//Convert Binary tree into Sum tree
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int sumTree(Node *root){
    if(!root){
        return 0;
    }
    int old=root->data;
    root->data=sumTree(root->left)+sumTree(root->right);
    return root->data+old;
}

int main(){
    Node* root=new Node(10);
    root->left=new Node(-2);
    root->right=new Node(6);
    root->left->left=new Node(8);
    root->left->right=new Node(-4);
    root->right->left=new Node(7);
    root->right->right=new Node(5);
    sumTree(root);
    inorder(root);
}

