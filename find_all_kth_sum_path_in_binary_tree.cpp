//Print all "k" sum paths in a binary tree
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

void printPath(vector <int>& v, int i){
    for(int j=i; j<v.size(); j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
}

void helper(Node* root, vector<int>&v, int k){
    if(root==NULL){
        return;
    }
    v.push_back(root->data);
    helper(root->left, v, k);
    helper(root->right, v, k);
    int temp=0; 
    for(int i=v.size()-1; i>=0; i--){
        temp+=v[i];
        if(temp==k){
            printPath(v, i);
        }
    }
    v.pop_back();
}

void printPath(Node* root, int k){
    vector<int>v;
    helper(root, v, k);
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(3);
    root->left->left = newNode(2);
    root->left->right = newNode(1);
    root->left->right->left = newNode(1);
    root->right = newNode(-1);
    root->right->left = newNode(4);
    root->right->left->left = newNode(1);
    root->right->left->right = newNode(2);
    root->right->right = newNode(5);
    root->right->right->right = newNode(2);
    int k=5;
    printPath(root, k);
}

