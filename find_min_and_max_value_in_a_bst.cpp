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

int minValue(node* root){
    node* temp=root;
    while(temp->left){
        temp=temp->left;
    }
    return temp->data;
}

int maxValue(node* root){
    node* temp=root;
    while(temp->right){
        temp=temp->right;
    }
    return temp->data;
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
    cout<<"\nMaximum value is "<<maxValue(root);
    cout<<"\nMinimum value is "<<minValue(root);
}


