//Mirror of a tree
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

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

Node* mirror(Node *root){
    if(!root){
        return root;
    }
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;
    if(root->left){
        mirror(root->left);
    }
    if(root->right){
        mirror(root->right);
    }
    return root;
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Inorder order traversal : ";
    inorder(root);
    cout<<endl;
    mirror(root);
    cout<<"Inorder order traversal after mirroring: ";
    inorder(root);
    cout<<endl;
}

