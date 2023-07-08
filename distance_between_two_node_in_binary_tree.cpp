//Find distance between 2 nodes in a Binary tree
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

int level(Node* root, int k, int l){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return l;
    }
    int left=level(root->left, k, l+1);
    if(left==-1){
        return level(root->right, k, l+1);
    }
    return left;
}

int dist(Node* root, int a, int b){
    Node* temp=lca(root, a, b);
    int d1=level(temp, a, 0);
    int d2=level(temp, b, 0);
    return d1+d2;
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Minimum dist is : ";
    cout<<dist(root, 5, 3);
}

