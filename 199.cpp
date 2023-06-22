//Sum of node on the longest path from root to leaf node
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

void sum(Node* root, int s, int l, int &maxLength, int &maxSum){
    if(root==NULL){
        if(maxLength<l){
            maxLength=l;
            maxSum=s;
        }
        else if(maxLength==l && maxSum<s){
            maxSum=s;
        }
        return;
    }
    sum(root->left, s+root->data, l+1, maxLength, maxSum);
    sum(root->right, s+root->data, l+1, maxLength, maxSum);
}

int sumOfLongestPath(Node* root){
    if(!root){
        return 0;
    }
    int maxSum=INT_MIN, maxLength=0;
    sum(root, 0, 0, maxLength, maxSum);
    return maxSum;
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"sum is : "<<sumOfLongestPath(root);
}

