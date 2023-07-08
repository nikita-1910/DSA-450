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

static int _pair=0;

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

void find(Node* root2, int d){
    if(root2==NULL){
        return;
    }
    if(d>root2->data){
        find(root2->right, d);
    }
    else{
        find(root2->left, d);
    }
    if(root2->data==d){
        _pair++;
    }
}

void traverse(Node* root1, Node* root2, int sum){
    if(root1==NULL || root2==NULL){
        return;
    }
    traverse(root1->left, root2, sum);
    traverse(root1->right, root2, sum);
    int d=sum-root1->data;
    find(root2, d);
}

int countPairs(Node *root1, Node *root2, int sum){
    traverse(root1, root2, sum);
    return _pair;
} 

int main(){
    Node* root1=NULL,* root2=NULL;
    root1=insert(root1, 5);
    insert(root1, 3);
    insert(root1, 7);
    insert(root1, 2);
    insert(root1, 4);
    insert(root1, 6);
    insert(root1, 8);

    root2=insert(root2, 10);
    insert(root2, 6);
    insert(root2, 15);
    insert(root2, 3);
    insert(root2, 8);
    insert(root2, 11);
    insert(root2, 18);
    int x=16;
    cout<<"Number of pairs is "<<countPairs(root1, root2, x);
}