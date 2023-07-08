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

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

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

node* lca(node* root, int n1, int n2)
{
    if(root==NULL){
        return NULL;
    }
    if(root->data>n1 && root->data>n2){
        return lca(root->left, n1, n2);
    }
    if(root->data<n1 && root->data<n2){
        return lca(root->right, n1, n2);
    }
    return root;
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
    cout<<"\n"<<lca(root, 20, 60)->data;
}

