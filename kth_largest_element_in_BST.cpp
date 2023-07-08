#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left, *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* insert(Node* root, int x){
    if(root==NULL){
        return new Node(x);
    }
    if(x<root->data){
        root->left= insert(root->left, x);
    }
    else if(x>root->data){
        root->right=insert(root->right, x);
    }
    return root;
}

void helper(Node* root, int k, int count){
    if(root==NULL || count>=k){
        return;
    }
    helper(root->right, k, count);
    count++;
    if(count==k){
        cout<<"Kth largest element is : "<<root->data<<endl;
        return;
    }
    helper(root->left, k, count);
}

void kthLargest(Node* root, int k){
    int count=0;
    helper(root, k, count);
}

int main(){
    Node* root=NULL;
    root=insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    for(int k=1; k<=7; k++){
        kthLargest(root, k);
    }
}