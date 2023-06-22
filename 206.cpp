//K-th ancestor of a node in Binary Tree
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

void levelOrder(Node *root, int ancestor[]){
    ancestor[root->data]=-1;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->left){
            ancestor[temp->left->data]=temp->data;
            q.push(temp->left);
        }
        if(temp->right){
            ancestor[temp->right->data]=temp->data;
            q.push(temp->right);
        }
    }
}

int kth_ancestor(Node* root, int n, int k, int node){
    int ancestor[n+1]={0};
    levelOrder(root, ancestor);
    int cnt=0;
    while(node!=-1){
        node=ancestor[node];
        cnt++;
        if(cnt==k){
            break;
        }
    }
    return node;
}

int main(){
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    int k=2, node=5;
    cout<<"kth ancestor of a given node is : "<<kth_ancestor(root, 5, k, node);
}

