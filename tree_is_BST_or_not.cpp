#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;
    node(int d){
        data=d;
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
    
node *insert(node *root, int x){
    if(root==NULL){
        return new node(x);
    }
    else if(root->data>x){
        root->left=insert(root->left, x);
    }
    else{
        root->right=insert(root->right, x);
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

int isBST(node* root){
    if(root==NULL){
        return 1;
    }
    if(root->left!=NULL && maxValue(root->left)>root->data){
        return 0;
    }
    if(root->right!=NULL && minValue(root->right)<root->data){
        return 0;
    }
    if(!isBST(root->left) || !isBST(root->right)){
        return 0;
    }
    return 1;
}

int main(){
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->right->left=new node(7);
    root->left->left=new node(1);
    root->left->right=new node(3);
    inorder(root);
    if(isBST(root))
        printf("\nIs BST");
    else
        printf("\nNot a BST");
    return 0;
}
