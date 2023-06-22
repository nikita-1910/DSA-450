//Find lca in a binary tree
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

Node* lca(Node* root, int a, int b){
    if(root==NULL || root->data==a || root->data==b){
        return root;
    }
    Node *l=lca(root->left, a, b);
    Node *r=lca(root->right, a, b);
    if(l==NULL) {
        return r;
    }
    else if(r == NULL) {
        return l;
    }
    else { 
        return root;
    }
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"lowest common ancestor is : ";
    cout<<lca(root, 5, 3)->data;
}


