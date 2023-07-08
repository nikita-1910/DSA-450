//Check if a tree is balanced or not
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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

bool isBalanced(Node *root){
    int left_height, right_height;
    if(root==NULL){
        return true;
    }
    left_height=height(root->left);
    right_height=height(root->right);
    if(abs(left_height-right_height)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return true;
    }
    return false;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left->left=new Node(4);
    if(isBalanced(root)){
        cout<<"Tree is balanced";
    }
    else{
        cout<<"Tree is not balanced";
    }
}
