#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left, *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
bool search(node *root, int x){
    if(root==NULL){
        return false;
    }
    else if(root->data==x){
        return true;
    }
    else if(root->data>x){
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
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
    //search(root, 10);
    if(search(root, 70)){
        cout<<"\nelement is present";
    }
    else{
        cout<<"\nelement is not present";
    }
}
