//Tree isomorphic problem
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

bool isIsomorphic(Node *root1, Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    
    }
    if(root1==NULL||root2==NULL){
        return false;
    
    }
    if (root1->data!=root2->data){
        return false;
    }
    return (isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))||
 (isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left));
}

int main(){
    Node* root1=new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);
    root1->left->left=new Node(4);
    // root1->left->right=new Node(5);
    // root1->left->left->left=new Node(4);
    Node* root2=new Node(1);
    root2->left=new Node(3);
    root2->right=new Node(2);
    root2->left->left=new Node(4);
    // root2->left->right=new Node(5);
    // root2->left->left->left=new Node(4);
    if(isIsomorphic(root1, root2)){
        cout<<"Tree is isomorphic";
    }
    else{
        cout<<"Tree is not isomorphic";
    }
}

