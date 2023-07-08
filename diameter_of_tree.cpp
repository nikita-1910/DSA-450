//Diameter of a tree
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

int diameter(Node *root, int &height){
    if(!root){
        height=0;
        return 0;
    }
    int left_height=0, right_height=0, left_diameter=0, right_diameter=0;
    left_diameter=diameter(root->left, left_height);
    right_diameter=diameter(root->right, right_height);
    height=max(left_height, right_height)+1;
    return max(left_height+right_height+1, max(left_diameter, right_diameter));
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    int height=0;
    cout<<"Diameter of a tree : "<<diameter(root, height);
}
