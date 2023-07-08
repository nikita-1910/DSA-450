#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

node* insert(node* root, int x){
    if (root==NULL){
        return new node(x);
    }
    if (root->data>x){
        root->left=insert(root->left,x);
    }
    else if (root->data<x){
        root->right=insert(root->right,x);
    }
        return root;
    
}

node *getSuccessor(node *curr){
    while (curr&&curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

node* deleteNode(node* root, int x){
    if(root==NULL){
        return NULL;
    }
    if(root->data>x){
        root->left=deleteNode(root->left,x);
    }
    else if(root->data<x){
        root->right=deleteNode(root->right,x);
    }
    else{
        if(root->right==NULL &&root->left==NULL){
            return NULL;
        }
        else if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        node* succ=getSuccessor(root->right);
        root->data=succ->data;
        root->right=deleteNode(root->right,succ->data);
    }
    return root;
}

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    node* root=NULL;
    root=insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout<<"\ninorder traversal : ";
    inorder(root);
    root=deleteNode(root, 20);
    cout<<"\ninorder traversal : ";
    inorder(root);
    root=deleteNode(root, 30);
    cout<<"\ninorder traversal : ";
    inorder(root);
    root=deleteNode(root, 50);
    cout<<"\ninorder traversal : ";
    inorder(root);
}


